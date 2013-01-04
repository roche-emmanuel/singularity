#include <sgtCommon.h>

#include <osg/ImageStream>
#include <osg/MatrixTransform>
#include <osgDB/ReadFile>
#include <osgGA/StateSetManipulator>
#include <osgViewer/ViewerEventHandlers>
#include <osgViewer/Viewer>

#include <vlc/vlc.h>
#include <vlc/libvlc.h>

#define VLC_PLUGIN_PATH "bin/win32/vlcPlugins/"

namespace vlc {

class VLCImageStream : public osg::ImageStream
{
public:
    static void* lockFunc( void* data, void** p_pixels )
    {
        VLCImageStream* stream = (VLCImageStream*)data;
        *p_pixels = (void*)stream->data();
        return NULL;
    }
    
    static void unlockFunc( void* data, void* id, void* const* p_pixels )
    {
        VLCImageStream* stream = (VLCImageStream*)data;
        stream->dirty();
    }
    
    static void displayFunc( void* data, void* id )
    {
    }
    
    static void videoEndFunc( const libvlc_event_t*, void* data )
    {
        VLCImageStream* stream = (VLCImageStream*)data;
        stream->_status = INVALID;
    }
    
    VLCImageStream() : osg::ImageStream()
    {		
		_vlcMedia = NULL;
		
		const char* vlc_args[] = {
			 "--ignore-config", // don't use VLC's config
		};
		
		_vlc = libvlc_new( sizeof(vlc_args)/sizeof(vlc_args[0]), vlc_args );
		THROW_IF(!_vlc,"Invalid _vlc object.");
		
		_vlcPlayer = libvlc_media_player_new(_vlc);
		CHECK(_vlcPlayer,"Invalid _vlcPlayer object.");

		libvlc_event_attach( libvlc_media_player_event_manager(_vlcPlayer), libvlc_MediaPlayerStopped, &VLCImageStream::videoEndFunc, this );

        _status = INVALID;
		
		logINFO("VLCImageStream created.");
    }
    
    VLCImageStream( const VLCImageStream& copy, const osg::CopyOp& op=osg::CopyOp::SHALLOW_COPY )
    :   osg::ImageStream(copy, op), _vlc(copy._vlc), _vlcMedia(copy._vlcMedia),
        _vlcPlayer(copy._vlcPlayer) {}
    
    META_Object( osg, VLCImageStream )
    
    /** File has to be in one of the following formats:
        [file://]filename              Plain media file
        http://ip:port/file            HTTP URL
        ftp://ip:port/file             FTP URL
        mms://ip:port/file             MMS URL
        screen://                      Screen capture
        [dvd://][device][@raw_device]  DVD device
        [vcd://][device]               VCD device
        [cdda://][device]              Audio CD device
        udp:[[<source address>]@[<bind address>][:<bind port>]]
    */
    void open( const std::string& file, bool needPlay=true, unsigned int w=512, unsigned int h=512 )
    {
        _vlcMedia = libvlc_media_new_path( _vlc, file.c_str() );
		CHECK(_vlcMedia,"Invalid _vlcMedia object.");
	
        // _vlcPlayer = libvlc_media_player_new_from_media( _vlcMedia );
        // CHECK(_vlcPlayer,"Invalid _vlcPlayer object.");
	
        libvlc_media_player_set_media( _vlcPlayer, _vlcMedia );
		libvlc_media_release(_vlcMedia);
		_vlcMedia = NULL;
		
        libvlc_video_set_callbacks( _vlcPlayer, &VLCImageStream::lockFunc, &VLCImageStream::unlockFunc, &VLCImageStream::displayFunc, this );
		libvlc_video_set_format( _vlcPlayer, "RGBA", w, h, w*4 );

        allocateImage( w, h, 1, GL_RGBA, GL_UNSIGNED_BYTE );
		
        if ( needPlay ) play();
		
    }
    
    virtual void play()
    {
        if ( _status==PAUSED )
        {
            libvlc_media_player_set_pause( _vlcPlayer, false );
        }
        else if ( _status!=PLAYING )
        {
            libvlc_media_player_play( _vlcPlayer );
        }
        _status = PLAYING;
    }
    
    virtual void pause()
    {
        libvlc_media_player_set_pause( _vlcPlayer, true );
        _status = PAUSED;
    }

    virtual void rewind()
    {
        libvlc_media_player_stop( _vlcPlayer );
        libvlc_media_player_set_time( _vlcPlayer, 0 );
        libvlc_media_player_next_frame( _vlcPlayer );
        _status = INVALID;
    }

    virtual void quit( bool waitForThreadToExit=true )
    {
        libvlc_media_player_stop( _vlcPlayer );
        libvlc_media_player_release( _vlcPlayer );
        _status = INVALID;
    }
    
    virtual void setReferenceTime( double time ) { libvlc_media_player_set_time(_vlcPlayer, (int)time); }
    virtual double getReferenceTime() const { return (int)libvlc_media_player_get_time(_vlcPlayer); }
    
    virtual void setTimeMultiplier( double m ) { libvlc_video_set_scale(_vlcPlayer, m); }
    virtual double getTimeMultiplier() const { return libvlc_video_get_scale(_vlcPlayer); }
    
    virtual void setVolume( float vol ) { libvlc_audio_set_volume(_vlcPlayer, (int)vol); }
    virtual float getVolume() const { return (int)libvlc_audio_get_volume(_vlcPlayer); }
    
    virtual ~VLCImageStream()
    {
		logINFO("Destroying VLCImageStream");
        if ( _status!=INVALID )
        {
            libvlc_media_player_stop( _vlcPlayer );
            libvlc_media_player_release( _vlcPlayer );
        }
        libvlc_release( _vlc );
		logINFO("VLCImageStream destroyed.");
    }
    
protected:	
    libvlc_instance_t* _vlc;
    libvlc_media_t* _vlcMedia;
    libvlc_media_player_t* _vlcPlayer;
};

};


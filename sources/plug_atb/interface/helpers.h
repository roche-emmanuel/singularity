typedef unsigned int GLenum;
typedef unsigned char GLboolean;
typedef unsigned int GLbitfield;
typedef signed char GLbyte;
typedef short GLshort;
typedef int GLint;
typedef int GLsizei;
typedef unsigned char GLubyte;
typedef unsigned short GLushort;
typedef unsigned int GLuint;
typedef float GLfloat;
typedef float GLclampf;
typedef double GLdouble;
typedef double GLclampd;
typedef void GLvoid;

namespace osg {

class ImageStream {};

};

namespace vlc {

class VLCImageStream : public osg::ImageStream {
public:
	VLCImageStream();

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
    void open( const std::string& file, bool needPlay=true, unsigned int w=512, unsigned int h=512 );
    virtual void play();
    virtual void pause();
    virtual void rewind();

    virtual void quit( bool waitForThreadToExit=true );
    
    virtual void setReferenceTime( double time );
    virtual double getReferenceTime() const;
    
    virtual void setTimeMultiplier( double m );
    virtual double getTimeMultiplier() const;
    
    virtual void setVolume( float vol );
    virtual float getVolume() const;
};

};



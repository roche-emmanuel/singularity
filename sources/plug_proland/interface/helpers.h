
namespace osg {

class Drawable {

};

};

namespace proland {

class ProlandDrawable : public osg::Drawable {

public:
	ProlandDrawable(const std::string& archive, const std::string& data);
	~ProlandDrawable();
};

};


#define VEC2_CLASS(cname,type) class cname { \
public: \
    type x; \
    type y; \
	 \
	cname(); \
    cname(type xi, type yi); \
    cname(const cname& v); \
 \
    type& operator[](const int i); \
 \
    bool operator==(const cname& v) const; \
    bool operator!=(const cname& v) const; \
    cname operator+(const cname& v) const; \
    cname operator-(const cname& v) const; \
    cname operator*(const cname& v) const; \
    cname operator*(const type scalar) const; \
    cname operator/(const cname& v) const; \
    cname operator/(const type scalar) const; \
    cname operator-() const; \
	 \
    bool operator<(const cname& v) const; \
	 \
	type length() const; \
	type squaredLength() const; \
    type dot(const cname& v) const; \
    cname normalize() const; \
    cname normalize(type l) const; \
};

#define VEC3_CLASS(cname,type,cname2) class cname { \
public: \
    type x; \
    type y; \
    type z; \
	 \
	cname(); \
    cname(type xi, type yi, type zi); \
    cname(const cname& v); \
 \
    type& operator[](const int i); \
 \
    bool operator==(const cname& v) const; \
    bool operator!=(const cname& v) const; \
    cname operator+(const cname& v) const; \
    cname operator-(const cname& v) const; \
    cname operator*(const cname& v) const; \
    cname operator*(const type scalar) const; \
    cname operator/(const cname& v) const; \
    cname operator/(const type scalar) const; \
    cname operator-() const; \
	 \
    bool operator<(const cname& v) const; \
	 \
	type length() const; \
	type squaredLength() const; \
    type dot(const cname& v) const; \
    cname normalize() const; \
    cname normalize(type l) const; \
    cname cross(const cname& v) const; \
    cname2 xy() const;\
};

namespace sgt {

VEC2_CLASS(vec2h,half);
VEC2_CLASS(vec2f,float);
VEC2_CLASS(vec2d,double);
VEC2_CLASS(vec2i,int);

VEC3_CLASS(vec3h,half,vec2h);
VEC3_CLASS(vec3f,float,vec2f);
VEC3_CLASS(vec3d,double,vec2d);
VEC3_CLASS(vec3i,int,vec2i);

};

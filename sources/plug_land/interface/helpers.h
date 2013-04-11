
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
    type dotproduct(const cname& v) const;	 \
    type dot(const cname& v) const; \
    cname normalize() const; \
    cname normalize(type l) const; \
};

namespace sgt {

VEC2_CLASS(vec2h,half);
VEC2_CLASS(vec2f,float);
VEC2_CLASS(vec2d,double);
VEC2_CLASS(vec2i,int);

};

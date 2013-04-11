
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
	type distanceTo(const cname& v) const; \
	type squaredDistanceTo(const cname& v) const; \
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
	type distanceTo(const cname& v) const; \
	type squaredDistanceTo(const cname& v) const; \
    type dot(const cname& v) const; \
    cname normalize() const; \
    cname normalize(type l) const; \
    cname cross(const cname& v) const; \
    cname2 xy() const;\
};

#define VEC4_CLASS(cname,type,cname2,cname3) class cname { \
public: \
    type x; \
    type y; \
    type z; \
    type w; \
	 \
	cname(); \
    cname(type xi, type yi, type zi, type wi); \
    cname(const cname& v); \
    cname(const cname3& v); \
    cname(const cname3& v, type wi); \
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
    type dot(const cname& v) const; \
    type dot(const cname3& v) const; \
	cname3 xyzw() const; \
    cname3 xyz() const; \
    cname2 xy() const;\
};

#define BOX2_CLASS(box2,type,vec2) struct box2 { \
public: \
    type xmin; \
    type xmax; \
    type ymin; \
    type ymax; \
 \
    box2(); \
    box2(type xmin, type xmax, type ymin, type ymax); \
    box2(const vec2 &p, const vec2 &q); \
    vec2 center() const; \
    type width() const; \
    type height() const; \
    type area() const; \
    box2 enlarge(type w) const; \
    box2 enlarge(const vec2 &p) const; \
    box2 enlarge(const box2 &r) const; \
    bool contains(const vec2 &p) const; \
    bool contains(const box2& bb) const; \
    bool intersects(const box2 &a) const; \
    vec2 nearestInnerPoint(vec2 a) const; \
    type distanceTo(vec2 a) const; \
    type squaredDistanceTo(vec2 a) const; \
    bool operator==(const box2& b) const; \
    bool operator!=(const box2& b) const; \
};

#define BOX3_CLASS(box3,type,vec3) struct box3 { \
public: \
    type xmin; \
    type xmax; \
    type ymin; \
    type ymax; \
    type zmin; \
    type zmax; \
    box3(); \
    box3(type xmin, type xmax, type ymin, type ymax, type zmin, type zmax); \
    box3(const vec3 &p, const vec3 &q); \
    vec3 center() const; \
    box3 enlarge(const vec3 &p) const; \
    box3 enlarge(const box3 &r) const; \
    bool contains(const vec3 &p) const; \
};

#define MAT2_CLASS(mat2,type,vec2) class mat2 { \
public: \
    mat2(); \
    mat2(type m00, type m01, \
         type m10, type m11); \
    mat2(const mat2& mat); \
    const type* coefficients() const; \
    type* operator[](int iRow); \
    vec2 getColumn(int iCol) const; \
    void setColumn(int iCol, const vec2& v); \
    mat2& operator=(const mat2& mat); \
    bool operator==(const mat2& mat) const; \
    bool operator!=(const mat2& mat) const; \
    mat2 operator+(const mat2& mat) const; \
    mat2 operator-(const mat2& mat) const; \
    mat2 operator*(const mat2& mat) const; \
    vec2 operator*(const vec2 &v) const; \
    mat2 operator*(const type scalar) const; \
    mat2 operator-() const; \
    mat2 transpose() const; \
    bool inverse(mat2& mInv, type tolerance = 1e-06) const; \
    mat2 inverse(type tolerance = 1e-06) const; \
    type determinant() const; \
    type trace() const; \
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

VEC4_CLASS(vec4h,half,vec2h,vec3h);
VEC4_CLASS(vec4f,float,vec2f,vec3f);
VEC4_CLASS(vec4d,double,vec2d,vec3d);
VEC4_CLASS(vec4i,int,vec2i,vec3i);

BOX2_CLASS(box2f,float,vec2f);
BOX2_CLASS(box2d,double,vec2d);
BOX2_CLASS(box2i,int,vec2i);

BOX3_CLASS(box3f,float,vec3f);
BOX3_CLASS(box3d,double,vec3d);
BOX3_CLASS(box3i,int,vec3i);

MAT2_CLASS(mat2f,float,vec2f);
MAT2_CLASS(mat2d,double,vec2d);
};

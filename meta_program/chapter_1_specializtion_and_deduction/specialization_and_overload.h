template<typename scalar_t>
inline scalar_t sq(const scalar_t& x);

inline double sq(const double& x);

template<>
inline double sq(const double& x);

template<>
inline int sq(const int& x);


inline double sq(const float x);

template<>
inline long sq(const long x);  // have error, which is not similar with overload

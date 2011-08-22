#ifndef THINP_MATH_H
#define THINP_MATH_H

//----------------------------------------------------------------

namespace base {
	// Only works for integral types
	template <typename T>
	T div_up(T const &v, T const &divisor) {
		return (v + (divisor - 1)) / divisor;
	}
}

//----------------------------------------------------------------

#endif
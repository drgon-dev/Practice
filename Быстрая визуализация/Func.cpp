#include <queue>

template <typename T>

void empty(std::queue<T>& inp) {
	while (inp.empty() == false)
		inp.pop();
}
#include<string>

namespace code3 {
	template<typename T>
	class Type {
	public:
		using ValueType = T;
		using PointerType = T*;
		using ConstVauleType = const T;
		static inline size_t Size = sizeof(T);
	};
}
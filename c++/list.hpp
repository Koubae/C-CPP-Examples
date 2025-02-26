// Pitchform example https://api.csswg.org/bikeshed/?force=1&url=https://raw.githubusercontent.com/vector-of-bool/pitchfork/develop/data/spec.bs
// list.hpp
namespace acme {

	template <typename T>
	class list;

	namespace detail {

		// Class implementing a "list iterator"
		template <typename T>
		class list_iterator {
		public:
			// Public default constructor
			list_iterator() = default;

		private:
			// A private constructor used to initialize the iterator to the proper state
			explicit list_iterator(list<T>&);

			// Permit our list class to construct us with the private constructor
			friend class list<T>;
		};

	}

	template <typename T>
	class list {
	public:
		using iterator = detail::list_iterator<T>;

		// The iterator class is a friend, giving it access to our internals
		friend class detail::list_iterator<T>;
	};

	template <typename T>
	class Node {
		private:
			T data;  // Private member
			Node* next;

			// List class is allowed to access Node's private members
			friend class list<T>;

		public:
			Node(T value) : data(value), next(nullptr) {} // using  initializer list https://en.cppreference.com/w/cpp/language/constructor | https://stackoverflow.com/questions/48492827/c-initialization-list-with-expressions
		};


}
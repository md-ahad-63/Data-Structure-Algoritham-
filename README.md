C++ Vector Cheat Sheet
🔰 Initialization
Code	Meaning	Time
vector<T> v;	Empty vector	O(1)
vector<T> v(n);	Size n	O(n)
vector<T> v(n, x);	n elements = x	O(n)
vector<T> v(v2);	Copy vector	O(n)
vector<T> v(A, A+n);	From array	       O(n)
📦 Capacity
Function	Meaning	Time
v.size()	Size	O(1)
v.capacity()	Capacity	O(1)
v.max_size()	Max limit	O(1)
v.clear()	Clear elements	O(n)
v.empty()	Check empty	O(1)
v.resize(k)	Resize	O(k)
🛠️ Modifiers
Function	Meaning	Time
v.assign()	Assign values	O(n)
v.push_back(x)	Add element	O(1)
v.pop_back()	Remove last	O(1)
v.insert()	Insert	O(n+k)
v.erase()	Delete	O(n+k)
🔎 Algorithms
Function	Meaning	Time
replace()	Replace values	O(n)
find()	Search value	O(n)
🎯 Element Access
Function	Meaning	Time
v[i]	Access element	O(1)
v.at(i)	Safe access	O(1)
v.front()	First	O(1)
v.back()	Last	O(1)
🔁 Iterators
Function	Meaning	Time
v.begin()	Start pointer	O(1)
v.end()	End pointer	O(1)
⚡ Notes
vector = dynamic array
push_back() fast
insert/erase() slow (avoid in large data)

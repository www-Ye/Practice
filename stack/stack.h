const int maxstack = 10;

class Stack{
public:
	Stack();
	bool empty() const;
	Error_code pop();
	Error_code top(Stack_entry &item) const;
	Error_code push(const Stack_entry &item);
private:
	int count;
	Stack_entry entry[maxstack];
};
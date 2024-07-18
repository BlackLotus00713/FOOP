#pragma once
#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP




template <class T>
class Example{};

template <>
class Example<int> {};

template<class Type> class LinkedList 
{
	class Node
	{
	public:
		Type& getData()
		{
			return data_;
		}
		const Type& getData() const
		{
			return data_;
		}
		void setData(const Type& data) //получаем ссылку на что угодно
		{
			data_ = data;
		}

		Node* getNext()
		{
			return next_;
		}
		const Node* getNext() const
		{
			return next_;
		}
		void setNext(const Node* node)
		{
			next_ = node->next_;
		}


		Node* getPrev()
		{
			return prev_;
		}
		const Node* getPrev() const
		{
			return prev_;
		}
		void setPrev(const Node* node)
		{
			prev_ = node->prev_;
		}

	private:
		Node* next_;
		Node* prev_;
		Type data_;
	};




public:

	LinkedList() : begin_(nullptr), end_(nullptr),size_(0)
	{

	}

	Type& operator[](int n) noexcept
	{
		auto current = begin_;
		for (; n != 0; n--)
		{
			current = current->getNext();
		}
		return current->getData();
	}

	Type& at(int n)
	{
		if (n >= size_)
		{
			throw - 1;
		}
		auto current = begin_;
		
		for (; n != 0; n--)
		{
			current = current->getNext();
		}
		return current->getData();
	}

	void push_back(const Type& obj)
	{
		auto new_node = new Node;
		new_node->setData(obj);
		if (!begin_)
		{
			begin_ = new_node;
			end_ = new_node;
		}
		else
		{
			new_node->setPrev(end_);
			end_->setNext(new_node);
			end_ = new_node;
		}
		size_++;
	}

	void push_front(const Type& obj)
	{

	}

	
	//    pop back    pop front  insert   emplace


	int size()const {
		return size_;
	}

private:

	Node* begin_;
	Node* end_;
	int size_;
};













#endif // !LINKED_LIST_HPP
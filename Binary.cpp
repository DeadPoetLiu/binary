#include <iostream>
#include "Binary.hpp"

using namespace std;

Binary::Binary()
{
	// TODO: implement this
	this->size_=0;
	this->number_=NULL;
}

Binary::Binary(const Binary& other)
{
	// TODO: implement this
	this->size_=other.size_;
	this->number_=new bool[this->size_];
	for(int i=0;i<size_;i++){
		this->number_[i]=other.number_[i];

	}


}

Binary::Binary(unsigned int source)
{
	// TODO: implement this
	int i=0;

	while(true){
		if(source==0)
			break;
		
		source=source>>1;


	}

	this->size_=i;

	

	this->number_=new bool[this->size_];

	i=0;
	while(true){
		if(source==0)
			break;

		if(source%2==0){

			this->number_[i++]=false;
		}else{
			this->number_[i++]=true;
		}
		
		source=source>>1;


	}

	

}

Binary::~Binary() 
{
	// TODO: implement this
	delete [] this->number_;


}

Binary& Binary::operator++(int blah)
{
	// TODO: implement this
	return *this;
}

Binary Binary::operator<<(unsigned int shift) const
{
	Binary res;
	// TODO: implement this
	return res;
}

Binary Binary::operator|(const Binary& other) const
{
	Binary res;
	// TODO: implement this
	return res;
}

Binary Binary::operator+(const Binary& other) const
{
	Binary res;
	// TODO: implement this
	


	return res;
}


Binary& Binary::operator=(const Binary& other)
{
	// TODO: implement this
	return *this;
}

Binary::operator int() const throw (std::exception) {
	if(this->size_>32)
		throw std::exception();

	int temp(0);
	// TODO: implement this
	
    for (int i = 0; i < this->size_; ++i) {
		temp = (temp << 1) + (this->number_[i] ? 1 : 0);

	}

		return temp;
}


ostream& operator<< (ostream& stream, const Binary& bin)
{
	// TODO: implement this
	return stream;
}

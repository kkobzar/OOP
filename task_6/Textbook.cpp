class Textbook: public Book
{
private:
	string owned;
public:
	Textbook(string student) : Book("prof. No Name"){
		this->write(120,"UzhNU publisher");
		owned = student;
	};
	Textbook(string student, string a) : Book(a){
		this->write(120,"UzhNU publisher");
		owned = student;
	};
	~Textbook(){
		owned.erase();
	};
	void read() override{
		cout << "Student " << owned << " reading" << endl;
		cout << "Page numbers: " << this->pageNums << endl;
		cout << "Reading book by " << author << endl;
		cout << "Published by " << this->publisher << endl;
	};
	
};
class Book :public Publishment
{
protected:
	string author;
public:
	Book(string a){
		this->write(40,"Publisher Transcarpathia");
		author = a;
	};
	~Book(){
		author.erase();
	};

	void read() {
		cout << "Page numbers: " << this->pageNums << endl;
		cout << "Reading book by " << author << endl;
		cout << "Published by " << this->publisher << endl;
	};	
};

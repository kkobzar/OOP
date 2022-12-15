class Magazine :public Publishment
{
private:
	int articles;
public:
	Magazine(int artNo){
		this->write(16,"Life Publishers International");
		articles = artNo;
	};
	~Magazine(){};

	void read() override {
		cout << "Page numbers: " << this->pageNums << endl;
		cout << "Reading magazine published by " << this->publisher << endl;
		cout << "Avaliable " << articles << " articles" << endl;

	};
};
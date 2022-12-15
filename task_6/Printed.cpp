class Printed : public Publishment
{
private:
	string theme;
public:
	Printed(string t){
		this->write(410,"myself");
		theme = t;
	};
	~Printed(){
		theme.erase();
	};
	
	void read() override {
		cout << "Page numbers: " << this->pageNums << endl;
		cout << "Reading printed publishment published by " << this->publisher << endl;
		cout << "On theme: " << theme << endl;
	};

};
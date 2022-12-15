class Publishment
{
protected:
	int pageNums;
	string publisher;
public:
	virtual void write(int pages, string auth){
		pageNums = pages;
		publisher = auth;
	};
	virtual void read() = 0;	
};

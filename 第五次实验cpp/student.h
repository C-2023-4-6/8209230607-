
class Student             
{
public:  
	void display();
	void set_value(int num, const char name[20], char sex);
private:
	int num;
	char name[20];
	char sex;
};
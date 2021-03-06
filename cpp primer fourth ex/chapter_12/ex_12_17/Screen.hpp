#ifndef SCREEN_HPP
#define SCREEN_HPP

#include <string>
#include <iostream>
class Screen
{
public:
	Screen(const index &hith,const index &with,const std::string &str):	
	height(hith),width(with),content(str),cursor(0) {}
	Screen& move(index r,index c);
	Screen& set(char);
	Screen& set(index,index,char);
	Screen& display(std::ostream &os) 
	{do_display(os);return *this;}
	const Screen& display(std::ostream &os) const
	{do_display(os);return *this;}

private:
	index cursor,height,width;
	std::string content;
	void do_display(std::ostream &os) const
	{
		os<<content<<std::endl;
	}
	typedef std::string::size_type index;//put it in last line of class Screen
};

#endif // SCREEN_HPP

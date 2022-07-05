
	
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
 
class media
{
    protected:
        int id;
        char title[50];
    public:
        media(int n,char *s)
        {
            id = n;
            strcpy(title,s);
        }
        virtual void display()=0;
};
 
class book : public media
{
        long isbn;
    public:
        book(int n,char *s,long isbn):media(n,s)
        {
            this->isbn=isbn;
        }
 
        void display()
        {
            cout<<"\nMedia Id:"<<id;
            cout<<"\nTitle :"<<title;
            cout<<"\nISBN :"<<isbn;
        }
 
};
 
class cd: public media
{
        int capacity;
    public:
        cd(int n,char *s,int c):media(n,s)
        {
            capacity=c;
        }
 
        void display()
        {
            cout<<"\nMedia Id:"<<id;
            cout<<"\nTitle :"<<title;
            cout<<"\nCAPACITY :"<<capacity;
        }
};
 
int main()
{
    media **m;
    int inputs;
    cout << "Enter total media inputs : ";
    cin >> inputs;
 
    m = new media*[inputs];
    for(int i=0;i<inputs;i++)
    {
        int id,capacity;
        long isbn;
        char title[30], mediaType;
 
        cout<<"Enter the media type(C for CD/B for Book):";
        cin>>mediaType;
        cout<<"\nENTER ID:";
        cin>>id;
        cout<<"\nENTER TITLE:";
        cin>>title;
 
        if(mediaType == 'B' || mediaType == 'b')
        {
            cout<<"ENTER ISBN: ";
            cin>>isbn;
            m[i] = new book(id,title,isbn);
        }
        else if(mediaType == 'C' || mediaType == 'c')
        {
            cout<<"ENTER CAPACITY: ";
            cin>>capacity;
            m[i] = new cd(id,title,capacity);
        }
 
    }
 
    cout<<"\n\nMEDIA DETAILS ARE:";
    for(int i=0;i<inputs;i++)
    {
        cout<<"\n-------------------------------\n";
        m[i]->display();
        cout<<"\n-------------------------------\n";
    }
 
    return 0;
}


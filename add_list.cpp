#include<iostream>
using namespace std;

int count,ch;

 struct node 
    {
        int data;
        struct node *link;
    };
    struct node *head, *newnode,*temp;

  
int in_beg()
{
    cout<<"Enter the data"<<endl;
        cin>>newnode->data;
        head = newnode;
        count++;
}

int in_end()
{
    cout<<"Enter the data"<<endl;
        cin>>newnode->data;
        newnode->link = 0;
        temp = head;
        while (temp->link!=NULL)
        {
            temp = temp->link;
        }
        temp->link = newnode;
        count++;
}

int in_pos()
{
     int pos ,i=1;
        cout<<"Enter the position";
        cin>>pos;
        if(pos>count)
        {
            cout<<"Invalid Position";
        }
        else
        {
            temp=head;
            while (i<pos)
            {
                temp = temp->link;
                i++;
            }
        }
        cout<<"Enter the data"<<endl;
        cin>>newnode->data;
        newnode->link = temp->link;
        temp->link = newnode;
        count++;
}

int main()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    cout<<"1.Insert at beginning"<<endl;
    cout<<"2.Insert at end"<<endl;
    cout<<"3.Insert at particular position"<<endl;
    cout<<"4. Exit"<<endl;
  
  do{
    cout<<"Enter choice"<<endl;
    cin>>ch;

    switch (ch)
    {
    case 1:
       in_beg();
        break;
    case 2:
       in_end();
        break;
    case 3:
       in_pos();
        break;
    case 4:
    exit(0);
    }
  }while(1);

  cout<<"no loop";
  
}

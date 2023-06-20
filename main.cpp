#include <iostream>

using namespace std;
char matrix [3][3]={'1','2','3','4','5','6','7','8','9'};
char player = 'x';
void printmatrix ()
{
    system ("cls");
    for (int row=0 ; row<3;row++){

        for (int col=0 ; col<3;col++)
       {
           cout<<matrix[row][col]<<" ";
       }
       cout<<endl;
    }


}
void play()
{
 char pos;
 cout<<"choose your position player"<< player << " "   ;
 cin>>pos;
     for (int row=0 ; row<3;row++){

        for (int col=0 ; col<3;col++)
       {
         if (matrix[row][col]==pos)
         {
             matrix[row][col]=player;
         }
       }
     }
      if (player=='x')
        player='o';
        else
        player ='x';

}
char whowin ()
{
    int xc=0;
    int oc =0;
    int counter =0;
     for (int row=0 ; row<3;row++){

        for (int col=0 ; col<3;col++){
                if (matrix[row][col]!='x'||matrix[row][col]!='o')counter++;
            if(matrix[row][col]=='x') xc++;
            else if (matrix[row][col]=='o') oc++;
     }
     xc=0;
     oc=0;
     }
     if (xc==3)  return 'x';
        else if (oc==3) return 'o';

        for (int col=0 ; col<3;col++){

        for (int row=0 ; row<3;row++){
            if(matrix[row][col]=='x') xc++;
            else if (matrix[row][col]=='o') oc++;
     }
     xc=0;
     oc=0;
     }
     if (xc==3) return 'x';
        else if (oc==3) return 'o';
         for (int col=0 ; col<3;col++){

        for (int row=0 ; row<3;row++){
                if(matrix[0][0]=='x'& matrix[1][1]== 'x'&matrix[2][2]=='x')
                return 'x';
        else if (matrix[0][0]=='o'& matrix[1][1]== 'o'&matrix[2][2]=='o')
        return 'o';
        else if (matrix[0][2]=='x'&matrix[1][1]=='x'&matrix[2][0]=='x')
            return 'x';
        else if (matrix[0][2]=='o'&matrix[1][1]=='o'&matrix[2][0]=='o')
            return 'o';
        }
         }
         if (counter==0) return 'z';


    return '.';
}
int main()
{
    while (whowin() =='.')
    {
    printmatrix();
    play();

}
    printmatrix();
    if ( whowin()=='x')
    {
        cout<< "the winner is "<<whowin()<<endl;

    }
    else if (whowin ()=='o')
    {
                cout<< "the winner is "<<whowin()<<endl;

    }
    else if (whowin()=='z')
    {
        cout<<"no winner"<<endl;
    }

    return 0;
}

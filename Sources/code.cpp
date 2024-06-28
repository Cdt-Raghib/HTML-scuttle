#include<iostream>
using namespace std;

int main()
{
    while(true)
    {
    string texts[100];
    int i = 0;
    while(getline(cin,texts[i]))
    {
        if (texts[i]=="")
        {
            //system("clr");
            for (int j=0;j<i;j++)
            {
                bool state = false;
                int size = texts[j].size();
                texts[j][0]=toupper(texts[j][0]);
                //cout << texts[j] << endl;
                for(int k=0;k<size;k++)
                {
                    if (texts[j][k]==' ')
                    {
                        state = true;
                        printf(" ");
                        continue;
                    }
                    if (state)
                    {
                        texts[j][k] = toupper(texts[j][k]);
                        state = false;
                    }
                    printf("%c", texts[j][k]);
                }
                printf("\n");
            }
            break;
        }
        i++;
    }
    }
}

#include <iostream>
#include <stack>
#include "Image.h"
#include "State.h"
#include "Transition.h"
#include <vector>
using namespace std; 


int main()
{
   
    
    vector<State> StateList;
    vector<Transition> TransitionList;
    
    StateList.push_back(State(1, "��ȸ"));
    StateList.push_back(State(2, "�߰�"));
    StateList.push_back(State(3, "����"));
    StateList.push_back(State(4, "����"));

    TransitionList.push_back(Transition(1, "���߰�", 2));
    TransitionList.push_back(Transition(2, "����ħ", 1));
    TransitionList.push_back(Transition(2, "�����Ÿ�����", 3));
    TransitionList.push_back(Transition(3, "�����Ÿ���Ż", 2));
    TransitionList.push_back(Transition(3, "HP����", 4));

    //vector<Image> ImageList;

       // ������ �ֱ� 
   /*Image Pixel;
   Pixel.X = 0;
   Pixel.Y = 0;
   Pixel.R = 165;
   Pixel.G = 55;
   Pixel.B = 128;

   ImageList.push_back(Pixel);*/

   // �����ڿ� �ֱ� 
//ImageList.push_back(Image(0, 0, 165, 55, 128));

    return 0;
}
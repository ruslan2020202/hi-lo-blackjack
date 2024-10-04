#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

bool find_element(vector<char> list, char el){
    auto element = find(list.begin(), list.end(), el);
    if (element != list.end()){
        return true;
    }else{
        return false;
    }
}

/* hi-lo */
int count_card(char card){
    const vector<char> high_cards {'k', 'd', 'v'};
    const vector<char> mid_cards {'7', '8', '9'};
    const vector<char> small_cards {'2', '3', '4', '5', '6'};
    if (find_element(high_cards, card)){
        return -1;
    }
    if(find_element(small_cards, card)){
        return 1;
    }
    return 0;
}

int main(){
    int count = 0;
    while (true){
        char card;
        cout << "Enter your card";
        cin >> card;
        count += count_card(card);
        cout << count;
    }
    return 0;
}
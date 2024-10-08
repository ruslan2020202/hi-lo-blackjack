#include <iostream>
#include <vector>
#include <algorithm> 

bool find_element(std::vector<char> list, char el){
    auto element = find(list.begin(), list.end(), el);
    return element != list.end();
}

class Tactics{
    
    public:
        const std::vector<char> high_cards {'k', 'd', 'v'};
        const std::vector<char> mid_cards {'7', '8', '9'};
        const std::vector<char> small_cards {'2', '3', '4', '5', '6'};
        
    int count_card(char card){
        
        if (find_element(high_cards, card)){
            return -1;
        }
        if(find_element(small_cards, card)){
            return 1;
        }
        return 0;
    }
};

int main(){
    int count = 0;
    while (true){
        char card;
        Tactics hi_lo;
        std::cout << "Enter your card";
        std::cin >> card;
        count += hi_lo.count_card(card);
        std::cout << count << std::endl;
    }
    return 0;
}

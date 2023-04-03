#include "player.hpp"
#include "card.hpp"
#include <vector>

namespace ariel
{
    
    Player::Player(string name)
    {
        this->_name = name;
        this->_cardesTakenSize = 0;
        this->_stackSize = 0;
        this->_win = -1;
    }
    
    void Player::add_to_stack(Card& card){
        _stack.push_back(card);
    }

    vector<Card> Player::get_stack(){
        return this->_stack;
    }

    void Player::add_to_cardesTaken(Card& card){
        _cardesTaken.push_back(card);
    }

    vector<Card> Player::get_cardesTaken(){
        return this->_cardesTaken;
    }

    string Player::getName()
    {
        return _name;
    }

    //get the stack size 
    int Player::stacksize()
    {
        return _stackSize;
    }

    void Player::set_stacksize(int num)
    {
        this->_stackSize = num + _stackSize;

    }

    //get the cards this player has won
    int Player::cardesTaken()
    {
        return _cardesTakenSize;
    }
    
    void Player::set_cardesTaken(int num_of_card)
    {
        this->_cardesTakenSize = _cardesTakenSize+num_of_card;
    }

    void Player::set_win_rate()
    {
    }
    double Player::get_win_rate()
    {
        return 0;
    }

    void Player::set_win(int n)
    {
        _win = n;
    }
    int Player::get_win()
    {
        return _win;
    }

}
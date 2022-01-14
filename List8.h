#ifndef ASSIGNMENT8SECOND_LIST_H
#define ASSIGNMENT8SECOND_LIST_H
#include <iostream>
#include <array>
#include <algorithm>
#include <optional>
#include <cassert>

template<typename T, size_t N>
class List {
public:
    void add(const T& t) {
        _data[_cur_pos] = t;
        _cur_pos++;
    }  			                  //구현하시오

    std::optional<T> find(const T& t) const {
        auto itr = std::find(_data.begin(), _data.end(), t);
        if(itr != _data.end()){
            return *itr;
        }
        else{
            return std::nullopt;
        }
    }  	//구현하시오

    std::optional<T> remove(const T& t) {
        auto itr = std::find(_data.begin(), _data.end(), t);
        if(itr != _data.end()){
            for(int i = 0; i < _data.size(); i++){
                if(_data[i] == *itr)
                    _data[i] = T();
            }
            return *itr;
        }
        else
            return std::nullopt;

    }  	      //구현하시오

    T* begin() { return _data.begin(); }
    T* end() { return _data.end(); }
    size_t size() const { return _data.size(); }

private:
    int _cur_pos = 0;
    std::array<T, N> _data;
};
#endif //ASSIGNMENT8SECOND_LIST_H

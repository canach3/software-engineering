#include "Bike.h"

Bike::Bike(string bikeId, string name) : bikeId(bikeId), name(name) {} // 생성자

/*
    함수 이름 : Bike::getId()
    기능      : 자전거 id를 반환함.
    전달 인자 : 없음
    반환값    : bikeId -> 자전거 id
*/
string Bike::getId() { return bikeId; }

/*
    함수 이름 : Bike::getName()
    기능      : 자전거 이름을 반환함.
    전달 인자 : 없음
    반환값    : name -> 자전거 이름
*/
string Bike::getName() { return name; }

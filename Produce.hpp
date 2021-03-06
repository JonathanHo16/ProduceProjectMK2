//
// Created by Jonathan Ho on 2018-11-24.
//

#ifndef PRODUCEPROJECT_PERSON_HPP
#define PRODUCEPROJECT_PERSON_HPP

#include <string>
using namespace std;


class Produce {
protected:
    string name;
    double weight;
    struct date
        {
            date();
            date (int new_day, int new_month, int new_year);
            int day;
            int month;
            int year;
            bool operator==(date& other_date);
            void print();

        };
    date expiry_date;
    bool compareDate(Produce::date other_date) const;
public:
    Produce ();
    Produce(string new_name,  double new_weight, int new_day, int new_month, int new_year);


    string getName();
    double getWeight();
    Produce::date getDate();
    bool operator==(Produce& other) const;
    void print();

};


#endif //PRODUCEPROJECT_PERSON_HPP

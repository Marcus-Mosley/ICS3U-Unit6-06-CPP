// Copyright (c) 2020 Marcus A. Mosley All rights reserved.
//
// Created by Marcus A. Mosley
// Created on December 2020
// This program translates Unicode into their Hex Equivalent

#include <iostream>
#include <map>
#include <list>


std::list<std::string> unicode_hex(std::string string,
    std::map<std::string, std::string> dictionary) {
    // This function translates Unicode into their Hex Equivalent

    std::list<std::string> hex;
    std::string temp_char;
    int counter;

    counter = string.length();

    while (counter > 0) {
        temp_char = string[string.length() - counter];
        if (dictionary.count(temp_char) > 0) {
            hex.push_back(dictionary[temp_char]);
        counter -= 1;
        }
    }

    return hex;
}


int main() {
    // This function receives input

    std::string string;
    std::list<std::string> hex;

    std::map<std::string, std::string> dictionary;

    std::map<char, int> someInfo = {
        {'a', 1},
        {'b', 2},
        {'c', 3},
    };

    // Adding Items
    dictionary.insert(std::pair<std::string, std::string>(" ", "20"));
    dictionary.insert(std::pair<std::string, std::string>("!", "21"));
    dictionary["#"] = "23";  // Can't Add in 22 since it is a Quotation Mark (")
    dictionary["$"] = "24";
    dictionary["%"] = "25";
    dictionary["&"] = "26";
    dictionary["'"] = "27";
    dictionary["("] = "28";
    dictionary[")"] = "29";
    dictionary["*"] = "2a";
    dictionary["+"] = "2b";
    dictionary[","] = "2c";
    dictionary["-"] = "2d";
    dictionary["."] = "2e";
    dictionary["/"] = "2f";
    dictionary["0"] = "30";
    dictionary["1"] = "31";
    dictionary["2"] = "32";
    dictionary["3"] = "33";
    dictionary["4"] = "34";
    dictionary["5"] = "35";
    dictionary["6"] = "36";
    dictionary["7"] = "37";
    dictionary["8"] = "38";
    dictionary["9"] = "39";
    dictionary[":"] = "3a";
    dictionary[";"] = "3b";
    dictionary["<"] = "3c";
    dictionary["="] = "3d";
    dictionary[">"] = "3e";
    dictionary["?"] = "3f";
    dictionary["@"] = "40";
    dictionary["A"] = "41";
    dictionary["B"] = "42";
    dictionary["C"] = "43";
    dictionary["D"] = "44";
    dictionary["E"] = "45";
    dictionary["F"] = "46";
    dictionary["G"] = "47";
    dictionary["H"] = "48";
    dictionary["I"] = "49";
    dictionary["J"] = "4a";
    dictionary["K"] = "4b";
    dictionary["L"] = "4c";
    dictionary["M"] = "4d";
    dictionary["N"] = "4e";
    dictionary["O"] = "4f";
    dictionary["P"] = "50";
    dictionary["Q"] = "51";
    dictionary["R"] = "52";
    dictionary["S"] = "53";
    dictionary["T"] = "54";
    dictionary["U"] = "55";
    dictionary["V"] = "56";
    dictionary["W"] = "57";
    dictionary["X"] = "58";
    dictionary["Y"] = "59";
    dictionary["Z"] = "5a";
    dictionary["["] = "5b";  // Can't Add in 5c since it is a Backslash (\)
    dictionary["]"] = "5d";
    dictionary["^"] = "5e";
    dictionary["_"] = "5f";
    dictionary["`"] = "60";
    dictionary["a"] = "61";
    dictionary["b"] = "62";
    dictionary["c"] = "63";
    dictionary["d"] = "64";
    dictionary["e"] = "65";
    dictionary["f"] = "66";
    dictionary["g"] = "67";
    dictionary["h"] = "68";
    dictionary["i"] = "69";
    dictionary["j"] = "6a";
    dictionary["k"] = "6b";
    dictionary["l"] = "6c";
    dictionary["m"] = "6d";
    dictionary["n"] = "6e";
    dictionary["o"] = "6f";
    dictionary["p"] = "70";
    dictionary["q"] = "71";
    dictionary["r"] = "72";
    dictionary["s"] = "73";
    dictionary["t"] = "74";
    dictionary["u"] = "75";
    dictionary["v"] = "76";
    dictionary["w"] = "77";
    dictionary["x"] = "78";
    dictionary["y"] = "79";
    dictionary["z"] = "7a";
    dictionary["{"] = "7b";
    dictionary["|"] = "7c";
    dictionary["}"] = "7d";
    dictionary["~"] = "7e";

    // Input

    std::cout << "Please enter a string to be translated into hex: ";
    std::getline(std::cin, string);
    std::cout << "" << std::endl;

    // Call Functions
    hex = unicode_hex(string, dictionary);

    std::cout << "”" << string << "” in hex is [ ";
    for (auto const &item : hex) {
        std::cout << item << " ";
    }
    std::cout << "]";
}

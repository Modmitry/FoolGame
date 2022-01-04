#pragma once

#include <Windows.h>
#include <utility>
#include <time.h>
#include <random>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

// card suit
enum class card_suit
{
	hearts,
	clubs,
	diamonds,
	spades
};


class card_methods
{

public:

	static bool load_card_image(const std::pair<card_suit, int>& card, String^% way);
	static bool index_by_card(String^% indx, const std::pair<card_suit, int>& card);
	static bool card_by_index(std::pair<card_suit, int>& card,String^% indx);
	static int get_random_int(const int& left_bound, const int& right_bound);
};


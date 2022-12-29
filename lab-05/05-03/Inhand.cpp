#pragma once
#include "Inhand.h"
#include "MagicWeapon.h"


template <typename leftH, typename rightH> leftH Inhand<leftH, rightH>::get_left() const {
	return this->left;
}
template <typename leftH, typename rightH> rightH Inhand<leftH, rightH>::get_right() const {
	return this->right;
}

template <typename leftH, typename rightH> Inhand<leftH, rightH>::Inhand(leftH left, rightH right) : left(left), right(right){}

template <typename leftH, typename rightH> void Inhand<leftH, rightH>::set_left(leftH left) {
	this->left = left;
	return;
}
template <typename leftH, typename rightH> void Inhand<leftH, rightH>::set_right(rightH right) {
	this->right = right;
	return;
}


// явное инстанцирование шаблонов для <MagicWeapon, int>
#define leftH MagicWeapon
#define rightH int

template
leftH Inhand<leftH, rightH>::get_left() const;

template
rightH Inhand<leftH, rightH>::get_right() const;

template
Inhand<leftH, rightH>::Inhand(leftH left, rightH right);

template
void Inhand<leftH, rightH>::set_left(leftH left);

template
void Inhand<leftH, rightH>::set_right(rightH right);
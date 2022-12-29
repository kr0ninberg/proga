#pragma once

template <typename leftH, typename rightH> class Inhand {
	leftH left;
	rightH right;
public:
	leftH get_left() const;
	rightH get_right() const;

	Inhand(leftH, rightH);

	void set_left(leftH);
	void set_right(rightH);
};


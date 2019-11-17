/*
    DABlin - capital DAB experience
    Copyright (C) 2019 Stefan Pöschel

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef EDI_SOURCE_H_
#define EDI_SOURCE_H_

#include "ensemble_source.h"


// --- EDISource -----------------------------------------------------------------
class EDISource : public EnsembleSource {
private:
	size_t CheckFrameSync();
	bool CheckFrameCompleted();
public:
	EDISource(std::string filename, EnsembleSourceObserver *observer) : EnsembleSource(filename, observer, "EDI", 10) {}
	~EDISource() {}
};

#endif /* EDI_SOURCE_H_ */

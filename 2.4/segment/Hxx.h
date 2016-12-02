/*
 * This file is part of AurigaHL7.
 *
 * AurigaHL7 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * AurigaHL7 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with AurigaHL7.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef __Hxx_v24_H__
#define __Hxx_v24_H__

#include "../../common/Util.h"

namespace HL7_24 {

/* any HL7 segment */
class Hxx : public HL7Segment {
 public:
  Hxx() { this->init(); }

 private:
  /* */
  enum FIELD_ID { FIELD_ID_MAX };

 public:
  const char* className() const { return "Hxx"; }
  Hxx* create() const { return new Hxx(); }

 private:
  void init() {
    setName("Hxx");
    /* Init members */
  }

 public:
  /* Getters */
}; /* End of Hxx */

} /* End of namespace HL7_24 */
#endif /* __Hxx_v24_H__ */
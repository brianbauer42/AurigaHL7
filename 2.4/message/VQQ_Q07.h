/*
 * This file is part of HCPPL.
 *
 * HCPPL is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * HCPPL is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with HCPPL.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef __VQQ_Q07__24_H__
#define __VQQ_Q07__24_H__

#include "../../common/Util.h"

namespace HL7_24 {

/* VQQ_Q07 */
struct VQQ_Q07 : public HL7Message {
  VQQ_Q07() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { FIELD_ID_MAX };

  const char* className() const { return "VQQ_Q07"; }
  VQQ_Q07* create() const { return new VQQ_Q07(); }

 private:
  /* Initialize object */
  void init() { setName("VQQ_Q07"); }

 public:
  /* Getters list */

  /* Checker list */
}; /* VQQ_Q07_ */
} /* namespace HL7_24 */
#endif /*  __VQQ_Q07__24_H__ */

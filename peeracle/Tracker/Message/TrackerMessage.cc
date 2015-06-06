/*
 * Copyright (c) 2015 peeracle contributors
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include "peeracle/Tracker/Message/TrackerMessage.h"

namespace peeracle {

void TrackerMessage::set(const std::string &key, int value) {
  // _key = key;
  _type = (Type) value;
}

void TrackerMessage::set(const std::string &key, const std::string &value) {
  _key = key;
  _rev = value;
}

void TrackerMessage::get(const std::string &key, int *value) {
  *value = _type;
}

void TrackerMessage::get(const std::string &key, std::string *value) {
  *value = _rev;
}

unsigned int TrackerMessage::getByteLength() {
  return 0;
}

void TrackerMessage::serialize(unsigned char *buffer, unsigned int length) {
}

void TrackerMessage::unserialize(const unsigned char *buffer,
                                 unsigned int length) {
}

}  // namespace peeracle

// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Float.proto

#ifndef PROTOBUF_Float_2eproto__INCLUDED
#define PROTOBUF_Float_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace std_msgs {
namespace msgs {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Float_2eproto();
void protobuf_AssignDesc_Float_2eproto();
void protobuf_ShutdownFile_Float_2eproto();

class Float;

// ===================================================================

class Float : public ::google::protobuf::Message {
 public:
  Float();
  virtual ~Float();

  Float(const Float& from);

  inline Float& operator=(const Float& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Float& default_instance();

  void Swap(Float* other);

  // implements Message ----------------------------------------------

  Float* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Float& from);
  void MergeFrom(const Float& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required float data = 1;
  inline bool has_data() const;
  inline void clear_data();
  static const int kDataFieldNumber = 1;
  inline float data() const;
  inline void set_data(float value);

  // @@protoc_insertion_point(class_scope:std_msgs.msgs.Float)
 private:
  inline void set_has_data();
  inline void clear_has_data();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  float data_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_Float_2eproto();
  friend void protobuf_AssignDesc_Float_2eproto();
  friend void protobuf_ShutdownFile_Float_2eproto();

  void InitAsDefaultInstance();
  static Float* default_instance_;
};
// ===================================================================


// ===================================================================

// Float

// required float data = 1;
inline bool Float::has_data() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Float::set_has_data() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Float::clear_has_data() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Float::clear_data() {
  data_ = 0;
  clear_has_data();
}
inline float Float::data() const {
  return data_;
}
inline void Float::set_data(float value) {
  set_has_data();
  data_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace std_msgs

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Float_2eproto__INCLUDED

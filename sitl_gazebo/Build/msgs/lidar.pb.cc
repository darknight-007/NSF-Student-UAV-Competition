// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: lidar.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "lidar.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace lidar_msgs {
namespace msgs {

namespace {

const ::google::protobuf::Descriptor* lidar_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  lidar_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_lidar_2eproto() {
  protobuf_AddDesc_lidar_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "lidar.proto");
  GOOGLE_CHECK(file != NULL);
  lidar_descriptor_ = file->message_type(0);
  static const int lidar_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(lidar, time_msec_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(lidar, min_distance_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(lidar, max_distance_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(lidar, current_distance_),
  };
  lidar_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      lidar_descriptor_,
      lidar::default_instance_,
      lidar_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(lidar, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(lidar, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(lidar));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_lidar_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    lidar_descriptor_, &lidar::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_lidar_2eproto() {
  delete lidar::default_instance_;
  delete lidar_reflection_;
}

void protobuf_AddDesc_lidar_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\013lidar.proto\022\017lidar_msgs.msgs\"`\n\005lidar\022"
    "\021\n\ttime_msec\030\001 \002(\002\022\024\n\014min_distance\030\002 \002(\002"
    "\022\024\n\014max_distance\030\003 \002(\002\022\030\n\020current_distan"
    "ce\030\004 \002(\002", 128);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "lidar.proto", &protobuf_RegisterTypes);
  lidar::default_instance_ = new lidar();
  lidar::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_lidar_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_lidar_2eproto {
  StaticDescriptorInitializer_lidar_2eproto() {
    protobuf_AddDesc_lidar_2eproto();
  }
} static_descriptor_initializer_lidar_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int lidar::kTimeMsecFieldNumber;
const int lidar::kMinDistanceFieldNumber;
const int lidar::kMaxDistanceFieldNumber;
const int lidar::kCurrentDistanceFieldNumber;
#endif  // !_MSC_VER

lidar::lidar()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void lidar::InitAsDefaultInstance() {
}

lidar::lidar(const lidar& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void lidar::SharedCtor() {
  _cached_size_ = 0;
  time_msec_ = 0;
  min_distance_ = 0;
  max_distance_ = 0;
  current_distance_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

lidar::~lidar() {
  SharedDtor();
}

void lidar::SharedDtor() {
  if (this != default_instance_) {
  }
}

void lidar::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* lidar::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return lidar_descriptor_;
}

const lidar& lidar::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_lidar_2eproto();
  return *default_instance_;
}

lidar* lidar::default_instance_ = NULL;

lidar* lidar::New() const {
  return new lidar;
}

void lidar::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    time_msec_ = 0;
    min_distance_ = 0;
    max_distance_ = 0;
    current_distance_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool lidar::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required float time_msec = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &time_msec_)));
          set_has_time_msec();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(21)) goto parse_min_distance;
        break;
      }

      // required float min_distance = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_min_distance:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &min_distance_)));
          set_has_min_distance();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(29)) goto parse_max_distance;
        break;
      }

      // required float max_distance = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_max_distance:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &max_distance_)));
          set_has_max_distance();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(37)) goto parse_current_distance;
        break;
      }

      // required float current_distance = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_current_distance:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &current_distance_)));
          set_has_current_distance();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void lidar::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required float time_msec = 1;
  if (has_time_msec()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(1, this->time_msec(), output);
  }

  // required float min_distance = 2;
  if (has_min_distance()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->min_distance(), output);
  }

  // required float max_distance = 3;
  if (has_max_distance()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(3, this->max_distance(), output);
  }

  // required float current_distance = 4;
  if (has_current_distance()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(4, this->current_distance(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* lidar::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required float time_msec = 1;
  if (has_time_msec()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(1, this->time_msec(), target);
  }

  // required float min_distance = 2;
  if (has_min_distance()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->min_distance(), target);
  }

  // required float max_distance = 3;
  if (has_max_distance()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(3, this->max_distance(), target);
  }

  // required float current_distance = 4;
  if (has_current_distance()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(4, this->current_distance(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int lidar::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required float time_msec = 1;
    if (has_time_msec()) {
      total_size += 1 + 4;
    }

    // required float min_distance = 2;
    if (has_min_distance()) {
      total_size += 1 + 4;
    }

    // required float max_distance = 3;
    if (has_max_distance()) {
      total_size += 1 + 4;
    }

    // required float current_distance = 4;
    if (has_current_distance()) {
      total_size += 1 + 4;
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void lidar::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const lidar* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const lidar*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void lidar::MergeFrom(const lidar& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_time_msec()) {
      set_time_msec(from.time_msec());
    }
    if (from.has_min_distance()) {
      set_min_distance(from.min_distance());
    }
    if (from.has_max_distance()) {
      set_max_distance(from.max_distance());
    }
    if (from.has_current_distance()) {
      set_current_distance(from.current_distance());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void lidar::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void lidar::CopyFrom(const lidar& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool lidar::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;

  return true;
}

void lidar::Swap(lidar* other) {
  if (other != this) {
    std::swap(time_msec_, other->time_msec_);
    std::swap(min_distance_, other->min_distance_);
    std::swap(max_distance_, other->max_distance_);
    std::swap(current_distance_, other->current_distance_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata lidar::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = lidar_descriptor_;
  metadata.reflection = lidar_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace lidar_msgs

// @@protoc_insertion_point(global_scope)

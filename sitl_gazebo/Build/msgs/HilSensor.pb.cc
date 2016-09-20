// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: HilSensor.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "HilSensor.pb.h"

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

namespace mavlink {
namespace msgs {

namespace {

const ::google::protobuf::Descriptor* HilSensor_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  HilSensor_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_HilSensor_2eproto() {
  protobuf_AddDesc_HilSensor_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "HilSensor.proto");
  GOOGLE_CHECK(file != NULL);
  HilSensor_descriptor_ = file->message_type(0);
  static const int HilSensor_offsets_[15] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HilSensor, time_usec_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HilSensor, xacc_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HilSensor, yacc_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HilSensor, zacc_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HilSensor, xgyro_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HilSensor, ygyro_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HilSensor, zgyro_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HilSensor, xmag_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HilSensor, ymag_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HilSensor, zmag_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HilSensor, abs_pressure_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HilSensor, diff_pressure_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HilSensor, pressure_alt_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HilSensor, temperature_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HilSensor, fields_updated_),
  };
  HilSensor_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      HilSensor_descriptor_,
      HilSensor::default_instance_,
      HilSensor_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HilSensor, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HilSensor, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(HilSensor));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_HilSensor_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    HilSensor_descriptor_, &HilSensor::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_HilSensor_2eproto() {
  delete HilSensor::default_instance_;
  delete HilSensor_reflection_;
}

void protobuf_AddDesc_HilSensor_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\017HilSensor.proto\022\014mavlink.msgs\"\217\002\n\tHilS"
    "ensor\022\021\n\ttime_usec\030\001 \002(\004\022\014\n\004xacc\030\002 \002(\002\022\014"
    "\n\004yacc\030\003 \002(\002\022\014\n\004zacc\030\004 \002(\002\022\r\n\005xgyro\030\005 \002("
    "\002\022\r\n\005ygyro\030\006 \002(\002\022\r\n\005zgyro\030\007 \002(\002\022\014\n\004xmag\030"
    "\010 \002(\002\022\014\n\004ymag\030\t \002(\002\022\014\n\004zmag\030\n \002(\002\022\024\n\014abs"
    "_pressure\030\013 \002(\002\022\025\n\rdiff_pressure\030\014 \002(\002\022\024"
    "\n\014pressure_alt\030\r \001(\002\022\023\n\013temperature\030\016 \001("
    "\002\022\026\n\016fields_updated\030\017 \002(\r", 305);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "HilSensor.proto", &protobuf_RegisterTypes);
  HilSensor::default_instance_ = new HilSensor();
  HilSensor::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_HilSensor_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_HilSensor_2eproto {
  StaticDescriptorInitializer_HilSensor_2eproto() {
    protobuf_AddDesc_HilSensor_2eproto();
  }
} static_descriptor_initializer_HilSensor_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int HilSensor::kTimeUsecFieldNumber;
const int HilSensor::kXaccFieldNumber;
const int HilSensor::kYaccFieldNumber;
const int HilSensor::kZaccFieldNumber;
const int HilSensor::kXgyroFieldNumber;
const int HilSensor::kYgyroFieldNumber;
const int HilSensor::kZgyroFieldNumber;
const int HilSensor::kXmagFieldNumber;
const int HilSensor::kYmagFieldNumber;
const int HilSensor::kZmagFieldNumber;
const int HilSensor::kAbsPressureFieldNumber;
const int HilSensor::kDiffPressureFieldNumber;
const int HilSensor::kPressureAltFieldNumber;
const int HilSensor::kTemperatureFieldNumber;
const int HilSensor::kFieldsUpdatedFieldNumber;
#endif  // !_MSC_VER

HilSensor::HilSensor()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void HilSensor::InitAsDefaultInstance() {
}

HilSensor::HilSensor(const HilSensor& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void HilSensor::SharedCtor() {
  _cached_size_ = 0;
  time_usec_ = GOOGLE_ULONGLONG(0);
  xacc_ = 0;
  yacc_ = 0;
  zacc_ = 0;
  xgyro_ = 0;
  ygyro_ = 0;
  zgyro_ = 0;
  xmag_ = 0;
  ymag_ = 0;
  zmag_ = 0;
  abs_pressure_ = 0;
  diff_pressure_ = 0;
  pressure_alt_ = 0;
  temperature_ = 0;
  fields_updated_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

HilSensor::~HilSensor() {
  SharedDtor();
}

void HilSensor::SharedDtor() {
  if (this != default_instance_) {
  }
}

void HilSensor::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* HilSensor::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return HilSensor_descriptor_;
}

const HilSensor& HilSensor::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_HilSensor_2eproto();
  return *default_instance_;
}

HilSensor* HilSensor::default_instance_ = NULL;

HilSensor* HilSensor::New() const {
  return new HilSensor;
}

void HilSensor::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    time_usec_ = GOOGLE_ULONGLONG(0);
    xacc_ = 0;
    yacc_ = 0;
    zacc_ = 0;
    xgyro_ = 0;
    ygyro_ = 0;
    zgyro_ = 0;
    xmag_ = 0;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    ymag_ = 0;
    zmag_ = 0;
    abs_pressure_ = 0;
    diff_pressure_ = 0;
    pressure_alt_ = 0;
    temperature_ = 0;
    fields_updated_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool HilSensor::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint64 time_usec = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &time_usec_)));
          set_has_time_usec();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(21)) goto parse_xacc;
        break;
      }

      // required float xacc = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_xacc:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &xacc_)));
          set_has_xacc();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(29)) goto parse_yacc;
        break;
      }

      // required float yacc = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_yacc:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &yacc_)));
          set_has_yacc();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(37)) goto parse_zacc;
        break;
      }

      // required float zacc = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_zacc:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &zacc_)));
          set_has_zacc();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(45)) goto parse_xgyro;
        break;
      }

      // required float xgyro = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_xgyro:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &xgyro_)));
          set_has_xgyro();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(53)) goto parse_ygyro;
        break;
      }

      // required float ygyro = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_ygyro:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &ygyro_)));
          set_has_ygyro();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(61)) goto parse_zgyro;
        break;
      }

      // required float zgyro = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_zgyro:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &zgyro_)));
          set_has_zgyro();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(69)) goto parse_xmag;
        break;
      }

      // required float xmag = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_xmag:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &xmag_)));
          set_has_xmag();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(77)) goto parse_ymag;
        break;
      }

      // required float ymag = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_ymag:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &ymag_)));
          set_has_ymag();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(85)) goto parse_zmag;
        break;
      }

      // required float zmag = 10;
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_zmag:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &zmag_)));
          set_has_zmag();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(93)) goto parse_abs_pressure;
        break;
      }

      // required float abs_pressure = 11;
      case 11: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_abs_pressure:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &abs_pressure_)));
          set_has_abs_pressure();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(101)) goto parse_diff_pressure;
        break;
      }

      // required float diff_pressure = 12;
      case 12: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_diff_pressure:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &diff_pressure_)));
          set_has_diff_pressure();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(109)) goto parse_pressure_alt;
        break;
      }

      // optional float pressure_alt = 13;
      case 13: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_pressure_alt:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &pressure_alt_)));
          set_has_pressure_alt();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(117)) goto parse_temperature;
        break;
      }

      // optional float temperature = 14;
      case 14: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_temperature:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &temperature_)));
          set_has_temperature();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(120)) goto parse_fields_updated;
        break;
      }

      // required uint32 fields_updated = 15;
      case 15: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_fields_updated:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &fields_updated_)));
          set_has_fields_updated();
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

void HilSensor::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint64 time_usec = 1;
  if (has_time_usec()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->time_usec(), output);
  }

  // required float xacc = 2;
  if (has_xacc()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->xacc(), output);
  }

  // required float yacc = 3;
  if (has_yacc()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(3, this->yacc(), output);
  }

  // required float zacc = 4;
  if (has_zacc()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(4, this->zacc(), output);
  }

  // required float xgyro = 5;
  if (has_xgyro()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(5, this->xgyro(), output);
  }

  // required float ygyro = 6;
  if (has_ygyro()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(6, this->ygyro(), output);
  }

  // required float zgyro = 7;
  if (has_zgyro()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(7, this->zgyro(), output);
  }

  // required float xmag = 8;
  if (has_xmag()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(8, this->xmag(), output);
  }

  // required float ymag = 9;
  if (has_ymag()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(9, this->ymag(), output);
  }

  // required float zmag = 10;
  if (has_zmag()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(10, this->zmag(), output);
  }

  // required float abs_pressure = 11;
  if (has_abs_pressure()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(11, this->abs_pressure(), output);
  }

  // required float diff_pressure = 12;
  if (has_diff_pressure()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(12, this->diff_pressure(), output);
  }

  // optional float pressure_alt = 13;
  if (has_pressure_alt()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(13, this->pressure_alt(), output);
  }

  // optional float temperature = 14;
  if (has_temperature()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(14, this->temperature(), output);
  }

  // required uint32 fields_updated = 15;
  if (has_fields_updated()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(15, this->fields_updated(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* HilSensor::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint64 time_usec = 1;
  if (has_time_usec()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->time_usec(), target);
  }

  // required float xacc = 2;
  if (has_xacc()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->xacc(), target);
  }

  // required float yacc = 3;
  if (has_yacc()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(3, this->yacc(), target);
  }

  // required float zacc = 4;
  if (has_zacc()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(4, this->zacc(), target);
  }

  // required float xgyro = 5;
  if (has_xgyro()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(5, this->xgyro(), target);
  }

  // required float ygyro = 6;
  if (has_ygyro()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(6, this->ygyro(), target);
  }

  // required float zgyro = 7;
  if (has_zgyro()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(7, this->zgyro(), target);
  }

  // required float xmag = 8;
  if (has_xmag()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(8, this->xmag(), target);
  }

  // required float ymag = 9;
  if (has_ymag()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(9, this->ymag(), target);
  }

  // required float zmag = 10;
  if (has_zmag()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(10, this->zmag(), target);
  }

  // required float abs_pressure = 11;
  if (has_abs_pressure()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(11, this->abs_pressure(), target);
  }

  // required float diff_pressure = 12;
  if (has_diff_pressure()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(12, this->diff_pressure(), target);
  }

  // optional float pressure_alt = 13;
  if (has_pressure_alt()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(13, this->pressure_alt(), target);
  }

  // optional float temperature = 14;
  if (has_temperature()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(14, this->temperature(), target);
  }

  // required uint32 fields_updated = 15;
  if (has_fields_updated()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, this->fields_updated(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int HilSensor::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint64 time_usec = 1;
    if (has_time_usec()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->time_usec());
    }

    // required float xacc = 2;
    if (has_xacc()) {
      total_size += 1 + 4;
    }

    // required float yacc = 3;
    if (has_yacc()) {
      total_size += 1 + 4;
    }

    // required float zacc = 4;
    if (has_zacc()) {
      total_size += 1 + 4;
    }

    // required float xgyro = 5;
    if (has_xgyro()) {
      total_size += 1 + 4;
    }

    // required float ygyro = 6;
    if (has_ygyro()) {
      total_size += 1 + 4;
    }

    // required float zgyro = 7;
    if (has_zgyro()) {
      total_size += 1 + 4;
    }

    // required float xmag = 8;
    if (has_xmag()) {
      total_size += 1 + 4;
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // required float ymag = 9;
    if (has_ymag()) {
      total_size += 1 + 4;
    }

    // required float zmag = 10;
    if (has_zmag()) {
      total_size += 1 + 4;
    }

    // required float abs_pressure = 11;
    if (has_abs_pressure()) {
      total_size += 1 + 4;
    }

    // required float diff_pressure = 12;
    if (has_diff_pressure()) {
      total_size += 1 + 4;
    }

    // optional float pressure_alt = 13;
    if (has_pressure_alt()) {
      total_size += 1 + 4;
    }

    // optional float temperature = 14;
    if (has_temperature()) {
      total_size += 1 + 4;
    }

    // required uint32 fields_updated = 15;
    if (has_fields_updated()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->fields_updated());
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

void HilSensor::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const HilSensor* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const HilSensor*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void HilSensor::MergeFrom(const HilSensor& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_time_usec()) {
      set_time_usec(from.time_usec());
    }
    if (from.has_xacc()) {
      set_xacc(from.xacc());
    }
    if (from.has_yacc()) {
      set_yacc(from.yacc());
    }
    if (from.has_zacc()) {
      set_zacc(from.zacc());
    }
    if (from.has_xgyro()) {
      set_xgyro(from.xgyro());
    }
    if (from.has_ygyro()) {
      set_ygyro(from.ygyro());
    }
    if (from.has_zgyro()) {
      set_zgyro(from.zgyro());
    }
    if (from.has_xmag()) {
      set_xmag(from.xmag());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_ymag()) {
      set_ymag(from.ymag());
    }
    if (from.has_zmag()) {
      set_zmag(from.zmag());
    }
    if (from.has_abs_pressure()) {
      set_abs_pressure(from.abs_pressure());
    }
    if (from.has_diff_pressure()) {
      set_diff_pressure(from.diff_pressure());
    }
    if (from.has_pressure_alt()) {
      set_pressure_alt(from.pressure_alt());
    }
    if (from.has_temperature()) {
      set_temperature(from.temperature());
    }
    if (from.has_fields_updated()) {
      set_fields_updated(from.fields_updated());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void HilSensor::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void HilSensor::CopyFrom(const HilSensor& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HilSensor::IsInitialized() const {
  if ((_has_bits_[0] & 0x00004fff) != 0x00004fff) return false;

  return true;
}

void HilSensor::Swap(HilSensor* other) {
  if (other != this) {
    std::swap(time_usec_, other->time_usec_);
    std::swap(xacc_, other->xacc_);
    std::swap(yacc_, other->yacc_);
    std::swap(zacc_, other->zacc_);
    std::swap(xgyro_, other->xgyro_);
    std::swap(ygyro_, other->ygyro_);
    std::swap(zgyro_, other->zgyro_);
    std::swap(xmag_, other->xmag_);
    std::swap(ymag_, other->ymag_);
    std::swap(zmag_, other->zmag_);
    std::swap(abs_pressure_, other->abs_pressure_);
    std::swap(diff_pressure_, other->diff_pressure_);
    std::swap(pressure_alt_, other->pressure_alt_);
    std::swap(temperature_, other->temperature_);
    std::swap(fields_updated_, other->fields_updated_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata HilSensor::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = HilSensor_descriptor_;
  metadata.reflection = HilSensor_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace mavlink

// @@protoc_insertion_point(global_scope)

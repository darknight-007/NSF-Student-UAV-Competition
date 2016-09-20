// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CommandTrajectory.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "CommandTrajectory.pb.h"

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

namespace mav_msgs {
namespace msgs {

namespace {

const ::google::protobuf::Descriptor* CommandTrajectory_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CommandTrajectory_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_CommandTrajectory_2eproto() {
  protobuf_AddDesc_CommandTrajectory_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "CommandTrajectory.proto");
  GOOGLE_CHECK(file != NULL);
  CommandTrajectory_descriptor_ = file->message_type(0);
  static const int CommandTrajectory_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CommandTrajectory, position_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CommandTrajectory, velocity_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CommandTrajectory, acceleration_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CommandTrajectory, jerk_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CommandTrajectory, snap_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CommandTrajectory, yaw_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CommandTrajectory, yaw_rate_),
  };
  CommandTrajectory_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CommandTrajectory_descriptor_,
      CommandTrajectory::default_instance_,
      CommandTrajectory_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CommandTrajectory, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CommandTrajectory, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CommandTrajectory));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_CommandTrajectory_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CommandTrajectory_descriptor_, &CommandTrajectory::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_CommandTrajectory_2eproto() {
  delete CommandTrajectory::default_instance_;
  delete CommandTrajectory_reflection_;
}

void protobuf_AddDesc_CommandTrajectory_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::gazebo::msgs::protobuf_AddDesc_vector3d_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\027CommandTrajectory.proto\022\rmav_msgs.msgs"
    "\032\016vector3d.proto\"\373\001\n\021CommandTrajectory\022\'"
    "\n\010position\030\001 \002(\0132\025.gazebo.msgs.Vector3d\022"
    "\'\n\010velocity\030\002 \002(\0132\025.gazebo.msgs.Vector3d"
    "\022+\n\014acceleration\030\003 \002(\0132\025.gazebo.msgs.Vec"
    "tor3d\022#\n\004jerk\030\004 \002(\0132\025.gazebo.msgs.Vector"
    "3d\022#\n\004snap\030\005 \002(\0132\025.gazebo.msgs.Vector3d\022"
    "\013\n\003yaw\030\006 \002(\002\022\020\n\010yaw_rate\030\007 \002(\002", 310);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "CommandTrajectory.proto", &protobuf_RegisterTypes);
  CommandTrajectory::default_instance_ = new CommandTrajectory();
  CommandTrajectory::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_CommandTrajectory_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_CommandTrajectory_2eproto {
  StaticDescriptorInitializer_CommandTrajectory_2eproto() {
    protobuf_AddDesc_CommandTrajectory_2eproto();
  }
} static_descriptor_initializer_CommandTrajectory_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int CommandTrajectory::kPositionFieldNumber;
const int CommandTrajectory::kVelocityFieldNumber;
const int CommandTrajectory::kAccelerationFieldNumber;
const int CommandTrajectory::kJerkFieldNumber;
const int CommandTrajectory::kSnapFieldNumber;
const int CommandTrajectory::kYawFieldNumber;
const int CommandTrajectory::kYawRateFieldNumber;
#endif  // !_MSC_VER

CommandTrajectory::CommandTrajectory()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void CommandTrajectory::InitAsDefaultInstance() {
  position_ = const_cast< ::gazebo::msgs::Vector3d*>(&::gazebo::msgs::Vector3d::default_instance());
  velocity_ = const_cast< ::gazebo::msgs::Vector3d*>(&::gazebo::msgs::Vector3d::default_instance());
  acceleration_ = const_cast< ::gazebo::msgs::Vector3d*>(&::gazebo::msgs::Vector3d::default_instance());
  jerk_ = const_cast< ::gazebo::msgs::Vector3d*>(&::gazebo::msgs::Vector3d::default_instance());
  snap_ = const_cast< ::gazebo::msgs::Vector3d*>(&::gazebo::msgs::Vector3d::default_instance());
}

CommandTrajectory::CommandTrajectory(const CommandTrajectory& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void CommandTrajectory::SharedCtor() {
  _cached_size_ = 0;
  position_ = NULL;
  velocity_ = NULL;
  acceleration_ = NULL;
  jerk_ = NULL;
  snap_ = NULL;
  yaw_ = 0;
  yaw_rate_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CommandTrajectory::~CommandTrajectory() {
  SharedDtor();
}

void CommandTrajectory::SharedDtor() {
  if (this != default_instance_) {
    delete position_;
    delete velocity_;
    delete acceleration_;
    delete jerk_;
    delete snap_;
  }
}

void CommandTrajectory::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CommandTrajectory::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CommandTrajectory_descriptor_;
}

const CommandTrajectory& CommandTrajectory::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_CommandTrajectory_2eproto();
  return *default_instance_;
}

CommandTrajectory* CommandTrajectory::default_instance_ = NULL;

CommandTrajectory* CommandTrajectory::New() const {
  return new CommandTrajectory;
}

void CommandTrajectory::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_position()) {
      if (position_ != NULL) position_->::gazebo::msgs::Vector3d::Clear();
    }
    if (has_velocity()) {
      if (velocity_ != NULL) velocity_->::gazebo::msgs::Vector3d::Clear();
    }
    if (has_acceleration()) {
      if (acceleration_ != NULL) acceleration_->::gazebo::msgs::Vector3d::Clear();
    }
    if (has_jerk()) {
      if (jerk_ != NULL) jerk_->::gazebo::msgs::Vector3d::Clear();
    }
    if (has_snap()) {
      if (snap_ != NULL) snap_->::gazebo::msgs::Vector3d::Clear();
    }
    yaw_ = 0;
    yaw_rate_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CommandTrajectory::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .gazebo.msgs.Vector3d position = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_position()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_velocity;
        break;
      }

      // required .gazebo.msgs.Vector3d velocity = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_velocity:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_velocity()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_acceleration;
        break;
      }

      // required .gazebo.msgs.Vector3d acceleration = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_acceleration:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_acceleration()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_jerk;
        break;
      }

      // required .gazebo.msgs.Vector3d jerk = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_jerk:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_jerk()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_snap;
        break;
      }

      // required .gazebo.msgs.Vector3d snap = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_snap:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_snap()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(53)) goto parse_yaw;
        break;
      }

      // required float yaw = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_yaw:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &yaw_)));
          set_has_yaw();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(61)) goto parse_yaw_rate;
        break;
      }

      // required float yaw_rate = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_yaw_rate:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &yaw_rate_)));
          set_has_yaw_rate();
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

void CommandTrajectory::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .gazebo.msgs.Vector3d position = 1;
  if (has_position()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->position(), output);
  }

  // required .gazebo.msgs.Vector3d velocity = 2;
  if (has_velocity()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->velocity(), output);
  }

  // required .gazebo.msgs.Vector3d acceleration = 3;
  if (has_acceleration()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->acceleration(), output);
  }

  // required .gazebo.msgs.Vector3d jerk = 4;
  if (has_jerk()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->jerk(), output);
  }

  // required .gazebo.msgs.Vector3d snap = 5;
  if (has_snap()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->snap(), output);
  }

  // required float yaw = 6;
  if (has_yaw()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(6, this->yaw(), output);
  }

  // required float yaw_rate = 7;
  if (has_yaw_rate()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(7, this->yaw_rate(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* CommandTrajectory::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .gazebo.msgs.Vector3d position = 1;
  if (has_position()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->position(), target);
  }

  // required .gazebo.msgs.Vector3d velocity = 2;
  if (has_velocity()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->velocity(), target);
  }

  // required .gazebo.msgs.Vector3d acceleration = 3;
  if (has_acceleration()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->acceleration(), target);
  }

  // required .gazebo.msgs.Vector3d jerk = 4;
  if (has_jerk()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        4, this->jerk(), target);
  }

  // required .gazebo.msgs.Vector3d snap = 5;
  if (has_snap()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        5, this->snap(), target);
  }

  // required float yaw = 6;
  if (has_yaw()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(6, this->yaw(), target);
  }

  // required float yaw_rate = 7;
  if (has_yaw_rate()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(7, this->yaw_rate(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int CommandTrajectory::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .gazebo.msgs.Vector3d position = 1;
    if (has_position()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->position());
    }

    // required .gazebo.msgs.Vector3d velocity = 2;
    if (has_velocity()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->velocity());
    }

    // required .gazebo.msgs.Vector3d acceleration = 3;
    if (has_acceleration()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->acceleration());
    }

    // required .gazebo.msgs.Vector3d jerk = 4;
    if (has_jerk()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->jerk());
    }

    // required .gazebo.msgs.Vector3d snap = 5;
    if (has_snap()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->snap());
    }

    // required float yaw = 6;
    if (has_yaw()) {
      total_size += 1 + 4;
    }

    // required float yaw_rate = 7;
    if (has_yaw_rate()) {
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

void CommandTrajectory::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CommandTrajectory* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CommandTrajectory*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CommandTrajectory::MergeFrom(const CommandTrajectory& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_position()) {
      mutable_position()->::gazebo::msgs::Vector3d::MergeFrom(from.position());
    }
    if (from.has_velocity()) {
      mutable_velocity()->::gazebo::msgs::Vector3d::MergeFrom(from.velocity());
    }
    if (from.has_acceleration()) {
      mutable_acceleration()->::gazebo::msgs::Vector3d::MergeFrom(from.acceleration());
    }
    if (from.has_jerk()) {
      mutable_jerk()->::gazebo::msgs::Vector3d::MergeFrom(from.jerk());
    }
    if (from.has_snap()) {
      mutable_snap()->::gazebo::msgs::Vector3d::MergeFrom(from.snap());
    }
    if (from.has_yaw()) {
      set_yaw(from.yaw());
    }
    if (from.has_yaw_rate()) {
      set_yaw_rate(from.yaw_rate());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CommandTrajectory::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CommandTrajectory::CopyFrom(const CommandTrajectory& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CommandTrajectory::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000007f) != 0x0000007f) return false;

  if (has_position()) {
    if (!this->position().IsInitialized()) return false;
  }
  if (has_velocity()) {
    if (!this->velocity().IsInitialized()) return false;
  }
  if (has_acceleration()) {
    if (!this->acceleration().IsInitialized()) return false;
  }
  if (has_jerk()) {
    if (!this->jerk().IsInitialized()) return false;
  }
  if (has_snap()) {
    if (!this->snap().IsInitialized()) return false;
  }
  return true;
}

void CommandTrajectory::Swap(CommandTrajectory* other) {
  if (other != this) {
    std::swap(position_, other->position_);
    std::swap(velocity_, other->velocity_);
    std::swap(acceleration_, other->acceleration_);
    std::swap(jerk_, other->jerk_);
    std::swap(snap_, other->snap_);
    std::swap(yaw_, other->yaw_);
    std::swap(yaw_rate_, other->yaw_rate_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CommandTrajectory::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CommandTrajectory_descriptor_;
  metadata.reflection = CommandTrajectory_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace mav_msgs

// @@protoc_insertion_point(global_scope)

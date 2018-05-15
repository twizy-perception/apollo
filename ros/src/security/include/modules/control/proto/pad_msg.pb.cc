// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/control/proto/pad_msg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "modules/control/proto/pad_msg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace apollo {
namespace control {
class PadMessageDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<PadMessage> {
} _PadMessage_default_instance_;

namespace protobuf_modules_2fcontrol_2fproto_2fpad_5fmsg_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PadMessage, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PadMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PadMessage, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PadMessage, driving_mode_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PadMessage, action_),
  0,
  1,
  2,
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, 8, sizeof(PadMessage)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_PadMessage_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "modules/control/proto/pad_msg.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace

void TableStruct::Shutdown() {
  _PadMessage_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::apollo::common::protobuf_modules_2fcommon_2fproto_2fheader_2eproto::InitDefaults();
  ::apollo::canbus::protobuf_modules_2fcanbus_2fproto_2fchassis_2eproto::InitDefaults();
  _PadMessage_default_instance_.DefaultConstruct();
  _PadMessage_default_instance_.get_mutable()->header_ = const_cast< ::apollo::common::Header*>(
      ::apollo::common::Header::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n#modules/control/proto/pad_msg.proto\022\016a"
      "pollo.control\032!modules/common/proto/head"
      "er.proto\032\"modules/canbus/proto/chassis.p"
      "roto\"\234\001\n\nPadMessage\022%\n\006header\030\001 \001(\0132\025.ap"
      "ollo.common.Header\0228\n\014driving_mode\030\002 \001(\016"
      "2\".apollo.canbus.Chassis.DrivingMode\022-\n\006"
      "action\030\003 \001(\0162\035.apollo.control.DrivingAct"
      "ion*/\n\rDrivingAction\022\010\n\004STOP\020\000\022\t\n\005START\020"
      "\001\022\t\n\005RESET\020\002"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 332);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "modules/control/proto/pad_msg.proto", &protobuf_RegisterTypes);
  ::apollo::common::protobuf_modules_2fcommon_2fproto_2fheader_2eproto::AddDescriptors();
  ::apollo::canbus::protobuf_modules_2fcanbus_2fproto_2fchassis_2eproto::AddDescriptors();
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_modules_2fcontrol_2fproto_2fpad_5fmsg_2eproto

const ::google::protobuf::EnumDescriptor* DrivingAction_descriptor() {
  protobuf_modules_2fcontrol_2fproto_2fpad_5fmsg_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_modules_2fcontrol_2fproto_2fpad_5fmsg_2eproto::file_level_enum_descriptors[0];
}
bool DrivingAction_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PadMessage::kHeaderFieldNumber;
const int PadMessage::kDrivingModeFieldNumber;
const int PadMessage::kActionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PadMessage::PadMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_modules_2fcontrol_2fproto_2fpad_5fmsg_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.control.PadMessage)
}
PadMessage::PadMessage(const PadMessage& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_header()) {
    header_ = new ::apollo::common::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  ::memcpy(&driving_mode_, &from.driving_mode_,
    reinterpret_cast<char*>(&action_) -
    reinterpret_cast<char*>(&driving_mode_) + sizeof(action_));
  // @@protoc_insertion_point(copy_constructor:apollo.control.PadMessage)
}

void PadMessage::SharedCtor() {
  _cached_size_ = 0;
  ::memset(&header_, 0, reinterpret_cast<char*>(&action_) -
    reinterpret_cast<char*>(&header_) + sizeof(action_));
}

PadMessage::~PadMessage() {
  // @@protoc_insertion_point(destructor:apollo.control.PadMessage)
  SharedDtor();
}

void PadMessage::SharedDtor() {
  if (this != internal_default_instance()) {
    delete header_;
  }
}

void PadMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PadMessage::descriptor() {
  protobuf_modules_2fcontrol_2fproto_2fpad_5fmsg_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_modules_2fcontrol_2fproto_2fpad_5fmsg_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const PadMessage& PadMessage::default_instance() {
  protobuf_modules_2fcontrol_2fproto_2fpad_5fmsg_2eproto::InitDefaults();
  return *internal_default_instance();
}

PadMessage* PadMessage::New(::google::protobuf::Arena* arena) const {
  PadMessage* n = new PadMessage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PadMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.control.PadMessage)
  if (has_header()) {
    GOOGLE_DCHECK(header_ != NULL);
    header_->::apollo::common::Header::Clear();
  }
  if (_has_bits_[0 / 32] & 6u) {
    ::memset(&driving_mode_, 0, reinterpret_cast<char*>(&action_) -
      reinterpret_cast<char*>(&driving_mode_) + sizeof(action_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool PadMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:apollo.control.PadMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .apollo.common.Header header = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_header()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .apollo.canbus.Chassis.DrivingMode driving_mode = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::apollo::canbus::Chassis_DrivingMode_IsValid(value)) {
            set_driving_mode(static_cast< ::apollo::canbus::Chassis_DrivingMode >(value));
          } else {
            mutable_unknown_fields()->AddVarint(2, value);
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .apollo.control.DrivingAction action = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::apollo::control::DrivingAction_IsValid(value)) {
            set_action(static_cast< ::apollo::control::DrivingAction >(value));
          } else {
            mutable_unknown_fields()->AddVarint(3, value);
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:apollo.control.PadMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:apollo.control.PadMessage)
  return false;
#undef DO_
}

void PadMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:apollo.control.PadMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .apollo.common.Header header = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->header_, output);
  }

  // optional .apollo.canbus.Chassis.DrivingMode driving_mode = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->driving_mode(), output);
  }

  // optional .apollo.control.DrivingAction action = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->action(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:apollo.control.PadMessage)
}

::google::protobuf::uint8* PadMessage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.control.PadMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .apollo.common.Header header = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->header_, deterministic, target);
  }

  // optional .apollo.canbus.Chassis.DrivingMode driving_mode = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->driving_mode(), target);
  }

  // optional .apollo.control.DrivingAction action = 3;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->action(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.control.PadMessage)
  return target;
}

size_t PadMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.control.PadMessage)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  if (_has_bits_[0 / 32] & 7u) {
    // optional .apollo.common.Header header = 1;
    if (has_header()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->header_);
    }

    // optional .apollo.canbus.Chassis.DrivingMode driving_mode = 2;
    if (has_driving_mode()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->driving_mode());
    }

    // optional .apollo.control.DrivingAction action = 3;
    if (has_action()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->action());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PadMessage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.control.PadMessage)
  GOOGLE_DCHECK_NE(&from, this);
  const PadMessage* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const PadMessage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.control.PadMessage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.control.PadMessage)
    MergeFrom(*source);
  }
}

void PadMessage::MergeFrom(const PadMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.control.PadMessage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      mutable_header()->::apollo::common::Header::MergeFrom(from.header());
    }
    if (cached_has_bits & 0x00000002u) {
      driving_mode_ = from.driving_mode_;
    }
    if (cached_has_bits & 0x00000004u) {
      action_ = from.action_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void PadMessage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.control.PadMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PadMessage::CopyFrom(const PadMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.control.PadMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PadMessage::IsInitialized() const {
  return true;
}

void PadMessage::Swap(PadMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PadMessage::InternalSwap(PadMessage* other) {
  std::swap(header_, other->header_);
  std::swap(driving_mode_, other->driving_mode_);
  std::swap(action_, other->action_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata PadMessage::GetMetadata() const {
  protobuf_modules_2fcontrol_2fproto_2fpad_5fmsg_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_modules_2fcontrol_2fproto_2fpad_5fmsg_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PadMessage

// optional .apollo.common.Header header = 1;
bool PadMessage::has_header() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void PadMessage::set_has_header() {
  _has_bits_[0] |= 0x00000001u;
}
void PadMessage::clear_has_header() {
  _has_bits_[0] &= ~0x00000001u;
}
void PadMessage::clear_header() {
  if (header_ != NULL) header_->::apollo::common::Header::Clear();
  clear_has_header();
}
const ::apollo::common::Header& PadMessage::header() const {
  // @@protoc_insertion_point(field_get:apollo.control.PadMessage.header)
  return header_ != NULL ? *header_
                         : *::apollo::common::Header::internal_default_instance();
}
::apollo::common::Header* PadMessage::mutable_header() {
  set_has_header();
  if (header_ == NULL) {
    header_ = new ::apollo::common::Header;
  }
  // @@protoc_insertion_point(field_mutable:apollo.control.PadMessage.header)
  return header_;
}
::apollo::common::Header* PadMessage::release_header() {
  // @@protoc_insertion_point(field_release:apollo.control.PadMessage.header)
  clear_has_header();
  ::apollo::common::Header* temp = header_;
  header_ = NULL;
  return temp;
}
void PadMessage::set_allocated_header(::apollo::common::Header* header) {
  delete header_;
  header_ = header;
  if (header) {
    set_has_header();
  } else {
    clear_has_header();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.control.PadMessage.header)
}

// optional .apollo.canbus.Chassis.DrivingMode driving_mode = 2;
bool PadMessage::has_driving_mode() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void PadMessage::set_has_driving_mode() {
  _has_bits_[0] |= 0x00000002u;
}
void PadMessage::clear_has_driving_mode() {
  _has_bits_[0] &= ~0x00000002u;
}
void PadMessage::clear_driving_mode() {
  driving_mode_ = 0;
  clear_has_driving_mode();
}
::apollo::canbus::Chassis_DrivingMode PadMessage::driving_mode() const {
  // @@protoc_insertion_point(field_get:apollo.control.PadMessage.driving_mode)
  return static_cast< ::apollo::canbus::Chassis_DrivingMode >(driving_mode_);
}
void PadMessage::set_driving_mode(::apollo::canbus::Chassis_DrivingMode value) {
  assert(::apollo::canbus::Chassis_DrivingMode_IsValid(value));
  set_has_driving_mode();
  driving_mode_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.PadMessage.driving_mode)
}

// optional .apollo.control.DrivingAction action = 3;
bool PadMessage::has_action() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void PadMessage::set_has_action() {
  _has_bits_[0] |= 0x00000004u;
}
void PadMessage::clear_has_action() {
  _has_bits_[0] &= ~0x00000004u;
}
void PadMessage::clear_action() {
  action_ = 0;
  clear_has_action();
}
::apollo::control::DrivingAction PadMessage::action() const {
  // @@protoc_insertion_point(field_get:apollo.control.PadMessage.action)
  return static_cast< ::apollo::control::DrivingAction >(action_);
}
void PadMessage::set_action(::apollo::control::DrivingAction value) {
  assert(::apollo::control::DrivingAction_IsValid(value));
  set_has_action();
  action_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.PadMessage.action)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace control
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SpeedData.proto

#include "SpeedData.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace aasdk {
namespace proto {
namespace data {
constexpr Speed::Speed(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : speed_(0)
  , cruise_engaged_(false)
  , cruise_set_speed_(false){}
struct SpeedDefaultTypeInternal {
  constexpr SpeedDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~SpeedDefaultTypeInternal() {}
  union {
    Speed _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT SpeedDefaultTypeInternal _Speed_default_instance_;
}  // namespace data
}  // namespace proto
}  // namespace aasdk
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_SpeedData_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_SpeedData_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_SpeedData_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_SpeedData_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::aasdk::proto::data::Speed, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::aasdk::proto::data::Speed, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::aasdk::proto::data::Speed, speed_),
  PROTOBUF_FIELD_OFFSET(::aasdk::proto::data::Speed, cruise_engaged_),
  PROTOBUF_FIELD_OFFSET(::aasdk::proto::data::Speed, cruise_set_speed_),
  0,
  1,
  2,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::aasdk::proto::data::Speed)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::aasdk::proto::data::_Speed_default_instance_),
};

const char descriptor_table_protodef_SpeedData_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\017SpeedData.proto\022\020aasdk.proto.data\"H\n\005S"
  "peed\022\r\n\005speed\030\001 \002(\005\022\026\n\016cruise_engaged\030\002 "
  "\001(\010\022\030\n\020cruise_set_speed\030\003 \001(\010"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_SpeedData_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_SpeedData_2eproto = {
  false, false, 109, descriptor_table_protodef_SpeedData_2eproto, "SpeedData.proto", 
  &descriptor_table_SpeedData_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_SpeedData_2eproto::offsets,
  file_level_metadata_SpeedData_2eproto, file_level_enum_descriptors_SpeedData_2eproto, file_level_service_descriptors_SpeedData_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_SpeedData_2eproto_getter() {
  return &descriptor_table_SpeedData_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_SpeedData_2eproto(&descriptor_table_SpeedData_2eproto);
namespace aasdk {
namespace proto {
namespace data {

// ===================================================================

class Speed::_Internal {
 public:
  using HasBits = decltype(std::declval<Speed>()._has_bits_);
  static void set_has_speed(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_cruise_engaged(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_cruise_set_speed(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000001) ^ 0x00000001) != 0;
  }
};

Speed::Speed(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:aasdk.proto.data.Speed)
}
Speed::Speed(const Speed& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&speed_, &from.speed_,
    static_cast<size_t>(reinterpret_cast<char*>(&cruise_set_speed_) -
    reinterpret_cast<char*>(&speed_)) + sizeof(cruise_set_speed_));
  // @@protoc_insertion_point(copy_constructor:aasdk.proto.data.Speed)
}

void Speed::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&speed_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&cruise_set_speed_) -
    reinterpret_cast<char*>(&speed_)) + sizeof(cruise_set_speed_));
}

Speed::~Speed() {
  // @@protoc_insertion_point(destructor:aasdk.proto.data.Speed)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Speed::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Speed::ArenaDtor(void* object) {
  Speed* _this = reinterpret_cast< Speed* >(object);
  (void)_this;
}
void Speed::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Speed::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Speed::Clear() {
// @@protoc_insertion_point(message_clear_start:aasdk.proto.data.Speed)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    ::memset(&speed_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&cruise_set_speed_) -
        reinterpret_cast<char*>(&speed_)) + sizeof(cruise_set_speed_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Speed::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // required int32 speed = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_speed(&has_bits);
          speed_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bool cruise_engaged = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_cruise_engaged(&has_bits);
          cruise_engaged_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bool cruise_set_speed = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          _Internal::set_has_cruise_set_speed(&has_bits);
          cruise_set_speed_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Speed::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:aasdk.proto.data.Speed)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 speed = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_speed(), target);
  }

  // optional bool cruise_engaged = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(2, this->_internal_cruise_engaged(), target);
  }

  // optional bool cruise_set_speed = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(3, this->_internal_cruise_set_speed(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:aasdk.proto.data.Speed)
  return target;
}

size_t Speed::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:aasdk.proto.data.Speed)
  size_t total_size = 0;

  // required int32 speed = 1;
  if (_internal_has_speed()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_speed());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000006u) {
    // optional bool cruise_engaged = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + 1;
    }

    // optional bool cruise_set_speed = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 + 1;
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Speed::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:aasdk.proto.data.Speed)
  GOOGLE_DCHECK_NE(&from, this);
  const Speed* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Speed>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:aasdk.proto.data.Speed)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:aasdk.proto.data.Speed)
    MergeFrom(*source);
  }
}

void Speed::MergeFrom(const Speed& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:aasdk.proto.data.Speed)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      speed_ = from.speed_;
    }
    if (cached_has_bits & 0x00000002u) {
      cruise_engaged_ = from.cruise_engaged_;
    }
    if (cached_has_bits & 0x00000004u) {
      cruise_set_speed_ = from.cruise_set_speed_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Speed::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:aasdk.proto.data.Speed)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Speed::CopyFrom(const Speed& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:aasdk.proto.data.Speed)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Speed::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  return true;
}

void Speed::InternalSwap(Speed* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Speed, cruise_set_speed_)
      + sizeof(Speed::cruise_set_speed_)
      - PROTOBUF_FIELD_OFFSET(Speed, speed_)>(
          reinterpret_cast<char*>(&speed_),
          reinterpret_cast<char*>(&other->speed_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Speed::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_SpeedData_2eproto_getter, &descriptor_table_SpeedData_2eproto_once,
      file_level_metadata_SpeedData_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace data
}  // namespace proto
}  // namespace aasdk
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::aasdk::proto::data::Speed* Arena::CreateMaybeMessage< ::aasdk::proto::data::Speed >(Arena* arena) {
  return Arena::CreateMessageInternal< ::aasdk::proto::data::Speed >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>

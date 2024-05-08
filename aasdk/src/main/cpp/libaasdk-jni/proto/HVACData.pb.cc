// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: HVACData.proto

#include "HVACData.pb.h"

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
constexpr HVAC::HVAC(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : target_temperature_(0)
  , current_temperature_(0){}
struct HVACDefaultTypeInternal {
  constexpr HVACDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~HVACDefaultTypeInternal() {}
  union {
    HVAC _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT HVACDefaultTypeInternal _HVAC_default_instance_;
}  // namespace data
}  // namespace proto
}  // namespace aasdk
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_HVACData_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_HVACData_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_HVACData_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_HVACData_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::aasdk::proto::data::HVAC, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::aasdk::proto::data::HVAC, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::aasdk::proto::data::HVAC, target_temperature_),
  PROTOBUF_FIELD_OFFSET(::aasdk::proto::data::HVAC, current_temperature_),
  0,
  1,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::aasdk::proto::data::HVAC)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::aasdk::proto::data::_HVAC_default_instance_),
};

const char descriptor_table_protodef_HVACData_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\016HVACData.proto\022\020aasdk.proto.data\"\?\n\004HV"
  "AC\022\032\n\022target_temperature\030\001 \002(\005\022\033\n\023curren"
  "t_temperature\030\002 \002(\005"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_HVACData_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_HVACData_2eproto = {
  false, false, 99, descriptor_table_protodef_HVACData_2eproto, "HVACData.proto", 
  &descriptor_table_HVACData_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_HVACData_2eproto::offsets,
  file_level_metadata_HVACData_2eproto, file_level_enum_descriptors_HVACData_2eproto, file_level_service_descriptors_HVACData_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_HVACData_2eproto_getter() {
  return &descriptor_table_HVACData_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_HVACData_2eproto(&descriptor_table_HVACData_2eproto);
namespace aasdk {
namespace proto {
namespace data {

// ===================================================================

class HVAC::_Internal {
 public:
  using HasBits = decltype(std::declval<HVAC>()._has_bits_);
  static void set_has_target_temperature(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_current_temperature(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000003) ^ 0x00000003) != 0;
  }
};

HVAC::HVAC(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:aasdk.proto.data.HVAC)
}
HVAC::HVAC(const HVAC& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&target_temperature_, &from.target_temperature_,
    static_cast<size_t>(reinterpret_cast<char*>(&current_temperature_) -
    reinterpret_cast<char*>(&target_temperature_)) + sizeof(current_temperature_));
  // @@protoc_insertion_point(copy_constructor:aasdk.proto.data.HVAC)
}

void HVAC::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&target_temperature_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&current_temperature_) -
    reinterpret_cast<char*>(&target_temperature_)) + sizeof(current_temperature_));
}

HVAC::~HVAC() {
  // @@protoc_insertion_point(destructor:aasdk.proto.data.HVAC)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void HVAC::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void HVAC::ArenaDtor(void* object) {
  HVAC* _this = reinterpret_cast< HVAC* >(object);
  (void)_this;
}
void HVAC::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void HVAC::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void HVAC::Clear() {
// @@protoc_insertion_point(message_clear_start:aasdk.proto.data.HVAC)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    ::memset(&target_temperature_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&current_temperature_) -
        reinterpret_cast<char*>(&target_temperature_)) + sizeof(current_temperature_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* HVAC::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // required int32 target_temperature = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_target_temperature(&has_bits);
          target_temperature_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required int32 current_temperature = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_current_temperature(&has_bits);
          current_temperature_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* HVAC::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:aasdk.proto.data.HVAC)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 target_temperature = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_target_temperature(), target);
  }

  // required int32 current_temperature = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_current_temperature(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:aasdk.proto.data.HVAC)
  return target;
}

size_t HVAC::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:aasdk.proto.data.HVAC)
  size_t total_size = 0;

  if (_internal_has_target_temperature()) {
    // required int32 target_temperature = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_target_temperature());
  }

  if (_internal_has_current_temperature()) {
    // required int32 current_temperature = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_current_temperature());
  }

  return total_size;
}
size_t HVAC::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:aasdk.proto.data.HVAC)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required int32 target_temperature = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_target_temperature());

    // required int32 current_temperature = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_current_temperature());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void HVAC::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:aasdk.proto.data.HVAC)
  GOOGLE_DCHECK_NE(&from, this);
  const HVAC* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<HVAC>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:aasdk.proto.data.HVAC)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:aasdk.proto.data.HVAC)
    MergeFrom(*source);
  }
}

void HVAC::MergeFrom(const HVAC& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:aasdk.proto.data.HVAC)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      target_temperature_ = from.target_temperature_;
    }
    if (cached_has_bits & 0x00000002u) {
      current_temperature_ = from.current_temperature_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void HVAC::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:aasdk.proto.data.HVAC)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void HVAC::CopyFrom(const HVAC& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:aasdk.proto.data.HVAC)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HVAC::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  return true;
}

void HVAC::InternalSwap(HVAC* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(HVAC, current_temperature_)
      + sizeof(HVAC::current_temperature_)
      - PROTOBUF_FIELD_OFFSET(HVAC, target_temperature_)>(
          reinterpret_cast<char*>(&target_temperature_),
          reinterpret_cast<char*>(&other->target_temperature_));
}

::PROTOBUF_NAMESPACE_ID::Metadata HVAC::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_HVACData_2eproto_getter, &descriptor_table_HVACData_2eproto_once,
      file_level_metadata_HVACData_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace data
}  // namespace proto
}  // namespace aasdk
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::aasdk::proto::data::HVAC* Arena::CreateMaybeMessage< ::aasdk::proto::data::HVAC >(Arena* arena) {
  return Arena::CreateMessageInternal< ::aasdk::proto::data::HVAC >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>

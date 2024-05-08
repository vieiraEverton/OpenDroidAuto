// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BluetoothPairingRequestMessage.proto

#include "BluetoothPairingRequestMessage.pb.h"

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
namespace messages {
constexpr BluetoothPairingRequest::BluetoothPairingRequest(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : phone_address_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , pairing_method_(0)
{}
struct BluetoothPairingRequestDefaultTypeInternal {
  constexpr BluetoothPairingRequestDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~BluetoothPairingRequestDefaultTypeInternal() {}
  union {
    BluetoothPairingRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT BluetoothPairingRequestDefaultTypeInternal _BluetoothPairingRequest_default_instance_;
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_BluetoothPairingRequestMessage_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_BluetoothPairingRequestMessage_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_BluetoothPairingRequestMessage_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_BluetoothPairingRequestMessage_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::aasdk::proto::messages::BluetoothPairingRequest, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::aasdk::proto::messages::BluetoothPairingRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::aasdk::proto::messages::BluetoothPairingRequest, phone_address_),
  PROTOBUF_FIELD_OFFSET(::aasdk::proto::messages::BluetoothPairingRequest, pairing_method_),
  0,
  1,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::aasdk::proto::messages::BluetoothPairingRequest)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::aasdk::proto::messages::_BluetoothPairingRequest_default_instance_),
};

const char descriptor_table_protodef_BluetoothPairingRequestMessage_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n$BluetoothPairingRequestMessage.proto\022\024"
  "aasdk.proto.messages\032 BluetoothPairingMe"
  "thodEnum.proto\"x\n\027BluetoothPairingReques"
  "t\022\025\n\rphone_address\030\001 \002(\t\022F\n\016pairing_meth"
  "od\030\002 \002(\0162..aasdk.proto.enums.BluetoothPa"
  "iringMethod.Enum"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_BluetoothPairingRequestMessage_2eproto_deps[1] = {
  &::descriptor_table_BluetoothPairingMethodEnum_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_BluetoothPairingRequestMessage_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_BluetoothPairingRequestMessage_2eproto = {
  false, false, 216, descriptor_table_protodef_BluetoothPairingRequestMessage_2eproto, "BluetoothPairingRequestMessage.proto", 
  &descriptor_table_BluetoothPairingRequestMessage_2eproto_once, descriptor_table_BluetoothPairingRequestMessage_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_BluetoothPairingRequestMessage_2eproto::offsets,
  file_level_metadata_BluetoothPairingRequestMessage_2eproto, file_level_enum_descriptors_BluetoothPairingRequestMessage_2eproto, file_level_service_descriptors_BluetoothPairingRequestMessage_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_BluetoothPairingRequestMessage_2eproto_getter() {
  return &descriptor_table_BluetoothPairingRequestMessage_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_BluetoothPairingRequestMessage_2eproto(&descriptor_table_BluetoothPairingRequestMessage_2eproto);
namespace aasdk {
namespace proto {
namespace messages {

// ===================================================================

class BluetoothPairingRequest::_Internal {
 public:
  using HasBits = decltype(std::declval<BluetoothPairingRequest>()._has_bits_);
  static void set_has_phone_address(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_pairing_method(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000003) ^ 0x00000003) != 0;
  }
};

BluetoothPairingRequest::BluetoothPairingRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:aasdk.proto.messages.BluetoothPairingRequest)
}
BluetoothPairingRequest::BluetoothPairingRequest(const BluetoothPairingRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  phone_address_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_phone_address()) {
    phone_address_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_phone_address(), 
      GetArenaForAllocation());
  }
  pairing_method_ = from.pairing_method_;
  // @@protoc_insertion_point(copy_constructor:aasdk.proto.messages.BluetoothPairingRequest)
}

void BluetoothPairingRequest::SharedCtor() {
phone_address_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
pairing_method_ = 0;
}

BluetoothPairingRequest::~BluetoothPairingRequest() {
  // @@protoc_insertion_point(destructor:aasdk.proto.messages.BluetoothPairingRequest)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void BluetoothPairingRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  phone_address_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void BluetoothPairingRequest::ArenaDtor(void* object) {
  BluetoothPairingRequest* _this = reinterpret_cast< BluetoothPairingRequest* >(object);
  (void)_this;
}
void BluetoothPairingRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void BluetoothPairingRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void BluetoothPairingRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:aasdk.proto.messages.BluetoothPairingRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    phone_address_.ClearNonDefaultToEmpty();
  }
  pairing_method_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* BluetoothPairingRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // required string phone_address = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_phone_address();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "aasdk.proto.messages.BluetoothPairingRequest.phone_address");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required .aasdk.proto.enums.BluetoothPairingMethod.Enum pairing_method = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::aasdk::proto::enums::BluetoothPairingMethod_Enum_IsValid(val))) {
            _internal_set_pairing_method(static_cast<::aasdk::proto::enums::BluetoothPairingMethod_Enum>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(2, val, mutable_unknown_fields());
          }
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

::PROTOBUF_NAMESPACE_ID::uint8* BluetoothPairingRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:aasdk.proto.messages.BluetoothPairingRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string phone_address = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_phone_address().data(), static_cast<int>(this->_internal_phone_address().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "aasdk.proto.messages.BluetoothPairingRequest.phone_address");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_phone_address(), target);
  }

  // required .aasdk.proto.enums.BluetoothPairingMethod.Enum pairing_method = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      2, this->_internal_pairing_method(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:aasdk.proto.messages.BluetoothPairingRequest)
  return target;
}

size_t BluetoothPairingRequest::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:aasdk.proto.messages.BluetoothPairingRequest)
  size_t total_size = 0;

  if (_internal_has_phone_address()) {
    // required string phone_address = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_phone_address());
  }

  if (_internal_has_pairing_method()) {
    // required .aasdk.proto.enums.BluetoothPairingMethod.Enum pairing_method = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_pairing_method());
  }

  return total_size;
}
size_t BluetoothPairingRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:aasdk.proto.messages.BluetoothPairingRequest)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required string phone_address = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_phone_address());

    // required .aasdk.proto.enums.BluetoothPairingMethod.Enum pairing_method = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_pairing_method());

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

void BluetoothPairingRequest::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:aasdk.proto.messages.BluetoothPairingRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const BluetoothPairingRequest* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<BluetoothPairingRequest>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:aasdk.proto.messages.BluetoothPairingRequest)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:aasdk.proto.messages.BluetoothPairingRequest)
    MergeFrom(*source);
  }
}

void BluetoothPairingRequest::MergeFrom(const BluetoothPairingRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:aasdk.proto.messages.BluetoothPairingRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_phone_address(from._internal_phone_address());
    }
    if (cached_has_bits & 0x00000002u) {
      pairing_method_ = from.pairing_method_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void BluetoothPairingRequest::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:aasdk.proto.messages.BluetoothPairingRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BluetoothPairingRequest::CopyFrom(const BluetoothPairingRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:aasdk.proto.messages.BluetoothPairingRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BluetoothPairingRequest::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  return true;
}

void BluetoothPairingRequest::InternalSwap(BluetoothPairingRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &phone_address_, GetArenaForAllocation(),
      &other->phone_address_, other->GetArenaForAllocation()
  );
  swap(pairing_method_, other->pairing_method_);
}

::PROTOBUF_NAMESPACE_ID::Metadata BluetoothPairingRequest::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_BluetoothPairingRequestMessage_2eproto_getter, &descriptor_table_BluetoothPairingRequestMessage_2eproto_once,
      file_level_metadata_BluetoothPairingRequestMessage_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::aasdk::proto::messages::BluetoothPairingRequest* Arena::CreateMaybeMessage< ::aasdk::proto::messages::BluetoothPairingRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::aasdk::proto::messages::BluetoothPairingRequest >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>

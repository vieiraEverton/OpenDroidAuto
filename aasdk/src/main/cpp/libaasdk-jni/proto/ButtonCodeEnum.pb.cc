// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ButtonCodeEnum.proto

#include "ButtonCodeEnum.pb.h"

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
namespace enums {
constexpr ButtonCode::ButtonCode(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized){}
struct ButtonCodeDefaultTypeInternal {
  constexpr ButtonCodeDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ButtonCodeDefaultTypeInternal() {}
  union {
    ButtonCode _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ButtonCodeDefaultTypeInternal _ButtonCode_default_instance_;
}  // namespace enums
}  // namespace proto
}  // namespace aasdk
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_ButtonCodeEnum_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_ButtonCodeEnum_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_ButtonCodeEnum_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_ButtonCodeEnum_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::aasdk::proto::enums::ButtonCode, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::aasdk::proto::enums::ButtonCode)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::aasdk::proto::enums::_ButtonCode_default_instance_),
};

const char descriptor_table_protodef_ButtonCodeEnum_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\024ButtonCodeEnum.proto\022\021aasdk.proto.enum"
  "s\"\202\003\n\nButtonCode\"\363\002\n\004Enum\022\010\n\004NONE\020\000\022\020\n\014M"
  "ICROPHONE_2\020\001\022\010\n\004MENU\020\002\022\010\n\004HOME\020\003\022\010\n\004BAC"
  "K\020\004\022\t\n\005PHONE\020\005\022\014\n\010CALL_END\020\006\022\006\n\002UP\020\023\022\010\n\004"
  "DOWN\020\024\022\010\n\004LEFT\020\025\022\t\n\005RIGHT\020\026\022\t\n\005ENTER\020\027\022\020"
  "\n\014MICROPHONE_1\020T\022\017\n\013TOGGLE_PLAY\020U\022\010\n\004NEX"
  "T\020W\022\010\n\004PREV\020X\022\010\n\004PLAY\020~\022\t\n\005PAUSE\020\177\022\n\n\005MU"
  "SIC\020\321\001\022\022\n\014SCROLL_WHEEL\020\200\200\004\022\013\n\005MEDIA\020\201\200\004\022"
  "\020\n\nNAVIGATION\020\202\200\004\022\013\n\005RADIO\020\203\200\004\022\t\n\003TEL\020\204\200"
  "\004\022\024\n\016PRIMARY_BUTTON\020\205\200\004\022\026\n\020SECONDARY_BUT"
  "TON\020\206\200\004\022\025\n\017TERTIARY_BUTTON\020\207\200\004"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_ButtonCodeEnum_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ButtonCodeEnum_2eproto = {
  false, false, 430, descriptor_table_protodef_ButtonCodeEnum_2eproto, "ButtonCodeEnum.proto", 
  &descriptor_table_ButtonCodeEnum_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_ButtonCodeEnum_2eproto::offsets,
  file_level_metadata_ButtonCodeEnum_2eproto, file_level_enum_descriptors_ButtonCodeEnum_2eproto, file_level_service_descriptors_ButtonCodeEnum_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_ButtonCodeEnum_2eproto_getter() {
  return &descriptor_table_ButtonCodeEnum_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_ButtonCodeEnum_2eproto(&descriptor_table_ButtonCodeEnum_2eproto);
namespace aasdk {
namespace proto {
namespace enums {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ButtonCode_Enum_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_ButtonCodeEnum_2eproto);
  return file_level_enum_descriptors_ButtonCodeEnum_2eproto[0];
}
bool ButtonCode_Enum_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 84:
    case 85:
    case 87:
    case 88:
    case 126:
    case 127:
    case 209:
    case 65536:
    case 65537:
    case 65538:
    case 65539:
    case 65540:
    case 65541:
    case 65542:
    case 65543:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr ButtonCode_Enum ButtonCode::NONE;
constexpr ButtonCode_Enum ButtonCode::MICROPHONE_2;
constexpr ButtonCode_Enum ButtonCode::MENU;
constexpr ButtonCode_Enum ButtonCode::HOME;
constexpr ButtonCode_Enum ButtonCode::BACK;
constexpr ButtonCode_Enum ButtonCode::PHONE;
constexpr ButtonCode_Enum ButtonCode::CALL_END;
constexpr ButtonCode_Enum ButtonCode::UP;
constexpr ButtonCode_Enum ButtonCode::DOWN;
constexpr ButtonCode_Enum ButtonCode::LEFT;
constexpr ButtonCode_Enum ButtonCode::RIGHT;
constexpr ButtonCode_Enum ButtonCode::ENTER;
constexpr ButtonCode_Enum ButtonCode::MICROPHONE_1;
constexpr ButtonCode_Enum ButtonCode::TOGGLE_PLAY;
constexpr ButtonCode_Enum ButtonCode::NEXT;
constexpr ButtonCode_Enum ButtonCode::PREV;
constexpr ButtonCode_Enum ButtonCode::PLAY;
constexpr ButtonCode_Enum ButtonCode::PAUSE;
constexpr ButtonCode_Enum ButtonCode::MUSIC;
constexpr ButtonCode_Enum ButtonCode::SCROLL_WHEEL;
constexpr ButtonCode_Enum ButtonCode::MEDIA;
constexpr ButtonCode_Enum ButtonCode::NAVIGATION;
constexpr ButtonCode_Enum ButtonCode::RADIO;
constexpr ButtonCode_Enum ButtonCode::TEL;
constexpr ButtonCode_Enum ButtonCode::PRIMARY_BUTTON;
constexpr ButtonCode_Enum ButtonCode::SECONDARY_BUTTON;
constexpr ButtonCode_Enum ButtonCode::TERTIARY_BUTTON;
constexpr ButtonCode_Enum ButtonCode::Enum_MIN;
constexpr ButtonCode_Enum ButtonCode::Enum_MAX;
constexpr int ButtonCode::Enum_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

class ButtonCode::_Internal {
 public:
};

ButtonCode::ButtonCode(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:aasdk.proto.enums.ButtonCode)
}
ButtonCode::ButtonCode(const ButtonCode& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:aasdk.proto.enums.ButtonCode)
}

void ButtonCode::SharedCtor() {
}

ButtonCode::~ButtonCode() {
  // @@protoc_insertion_point(destructor:aasdk.proto.enums.ButtonCode)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void ButtonCode::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void ButtonCode::ArenaDtor(void* object) {
  ButtonCode* _this = reinterpret_cast< ButtonCode* >(object);
  (void)_this;
}
void ButtonCode::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ButtonCode::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ButtonCode::Clear() {
// @@protoc_insertion_point(message_clear_start:aasdk.proto.enums.ButtonCode)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ButtonCode::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
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
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ButtonCode::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:aasdk.proto.enums.ButtonCode)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:aasdk.proto.enums.ButtonCode)
  return target;
}

size_t ButtonCode::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:aasdk.proto.enums.ButtonCode)
  size_t total_size = 0;

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

void ButtonCode::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:aasdk.proto.enums.ButtonCode)
  GOOGLE_DCHECK_NE(&from, this);
  const ButtonCode* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ButtonCode>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:aasdk.proto.enums.ButtonCode)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:aasdk.proto.enums.ButtonCode)
    MergeFrom(*source);
  }
}

void ButtonCode::MergeFrom(const ButtonCode& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:aasdk.proto.enums.ButtonCode)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void ButtonCode::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:aasdk.proto.enums.ButtonCode)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ButtonCode::CopyFrom(const ButtonCode& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:aasdk.proto.enums.ButtonCode)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ButtonCode::IsInitialized() const {
  return true;
}

void ButtonCode::InternalSwap(ButtonCode* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ButtonCode::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_ButtonCodeEnum_2eproto_getter, &descriptor_table_ButtonCodeEnum_2eproto_once,
      file_level_metadata_ButtonCodeEnum_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace enums
}  // namespace proto
}  // namespace aasdk
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::aasdk::proto::enums::ButtonCode* Arena::CreateMaybeMessage< ::aasdk::proto::enums::ButtonCode >(Arena* arena) {
  return Arena::CreateMessageInternal< ::aasdk::proto::enums::ButtonCode >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
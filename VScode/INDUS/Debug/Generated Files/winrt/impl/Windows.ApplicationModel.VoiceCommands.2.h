// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210211.2

#ifndef WINRT_Windows_ApplicationModel_VoiceCommands_2_H
#define WINRT_Windows_ApplicationModel_VoiceCommands_2_H
#include "winrt/impl/Windows.ApplicationModel.AppService.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.ApplicationModel.VoiceCommands.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::VoiceCommands
{
    struct __declspec(empty_bases) VoiceCommand : Windows::ApplicationModel::VoiceCommands::IVoiceCommand
    {
        VoiceCommand(std::nullptr_t) noexcept {}
        VoiceCommand(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::VoiceCommands::IVoiceCommand(ptr, take_ownership_from_abi) {}
        VoiceCommand(VoiceCommand const&) noexcept = default;
        VoiceCommand(VoiceCommand&&) noexcept = default;
        VoiceCommand& operator=(VoiceCommand const&) & noexcept = default;
        VoiceCommand& operator=(VoiceCommand&&) & noexcept = default;
    };
    struct __declspec(empty_bases) VoiceCommandCompletedEventArgs : Windows::ApplicationModel::VoiceCommands::IVoiceCommandCompletedEventArgs
    {
        VoiceCommandCompletedEventArgs(std::nullptr_t) noexcept {}
        VoiceCommandCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::VoiceCommands::IVoiceCommandCompletedEventArgs(ptr, take_ownership_from_abi) {}
        VoiceCommandCompletedEventArgs(VoiceCommandCompletedEventArgs const&) noexcept = default;
        VoiceCommandCompletedEventArgs(VoiceCommandCompletedEventArgs&&) noexcept = default;
        VoiceCommandCompletedEventArgs& operator=(VoiceCommandCompletedEventArgs const&) & noexcept = default;
        VoiceCommandCompletedEventArgs& operator=(VoiceCommandCompletedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) VoiceCommandConfirmationResult : Windows::ApplicationModel::VoiceCommands::IVoiceCommandConfirmationResult
    {
        VoiceCommandConfirmationResult(std::nullptr_t) noexcept {}
        VoiceCommandConfirmationResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::VoiceCommands::IVoiceCommandConfirmationResult(ptr, take_ownership_from_abi) {}
        VoiceCommandConfirmationResult(VoiceCommandConfirmationResult const&) noexcept = default;
        VoiceCommandConfirmationResult(VoiceCommandConfirmationResult&&) noexcept = default;
        VoiceCommandConfirmationResult& operator=(VoiceCommandConfirmationResult const&) & noexcept = default;
        VoiceCommandConfirmationResult& operator=(VoiceCommandConfirmationResult&&) & noexcept = default;
    };
    struct __declspec(empty_bases) VoiceCommandContentTile : Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile
    {
        VoiceCommandContentTile(std::nullptr_t) noexcept {}
        VoiceCommandContentTile(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile(ptr, take_ownership_from_abi) {}
        VoiceCommandContentTile();
        VoiceCommandContentTile(VoiceCommandContentTile const&) noexcept = default;
        VoiceCommandContentTile(VoiceCommandContentTile&&) noexcept = default;
        VoiceCommandContentTile& operator=(VoiceCommandContentTile const&) & noexcept = default;
        VoiceCommandContentTile& operator=(VoiceCommandContentTile&&) & noexcept = default;
    };
    struct __declspec(empty_bases) VoiceCommandDefinition : Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinition
    {
        VoiceCommandDefinition(std::nullptr_t) noexcept {}
        VoiceCommandDefinition(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinition(ptr, take_ownership_from_abi) {}
        VoiceCommandDefinition(VoiceCommandDefinition const&) noexcept = default;
        VoiceCommandDefinition(VoiceCommandDefinition&&) noexcept = default;
        VoiceCommandDefinition& operator=(VoiceCommandDefinition const&) & noexcept = default;
        VoiceCommandDefinition& operator=(VoiceCommandDefinition&&) & noexcept = default;
    };
    struct VoiceCommandDefinitionManager
    {
        VoiceCommandDefinitionManager() = delete;
        static auto InstallCommandDefinitionsFromStorageFileAsync(Windows::Storage::StorageFile const& file);
        [[nodiscard]] static auto InstalledCommandDefinitions();
    };
    struct __declspec(empty_bases) VoiceCommandDisambiguationResult : Windows::ApplicationModel::VoiceCommands::IVoiceCommandDisambiguationResult
    {
        VoiceCommandDisambiguationResult(std::nullptr_t) noexcept {}
        VoiceCommandDisambiguationResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::VoiceCommands::IVoiceCommandDisambiguationResult(ptr, take_ownership_from_abi) {}
        VoiceCommandDisambiguationResult(VoiceCommandDisambiguationResult const&) noexcept = default;
        VoiceCommandDisambiguationResult(VoiceCommandDisambiguationResult&&) noexcept = default;
        VoiceCommandDisambiguationResult& operator=(VoiceCommandDisambiguationResult const&) & noexcept = default;
        VoiceCommandDisambiguationResult& operator=(VoiceCommandDisambiguationResult&&) & noexcept = default;
    };
    struct __declspec(empty_bases) VoiceCommandResponse : Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponse
    {
        VoiceCommandResponse(std::nullptr_t) noexcept {}
        VoiceCommandResponse(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponse(ptr, take_ownership_from_abi) {}
        VoiceCommandResponse(VoiceCommandResponse const&) noexcept = default;
        VoiceCommandResponse(VoiceCommandResponse&&) noexcept = default;
        VoiceCommandResponse& operator=(VoiceCommandResponse const&) & noexcept = default;
        VoiceCommandResponse& operator=(VoiceCommandResponse&&) & noexcept = default;
        [[nodiscard]] static auto MaxSupportedVoiceCommandContentTiles();
        static auto CreateResponse(Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& userMessage);
        static auto CreateResponse(Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& message, param::iterable<Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile> const& contentTiles);
        static auto CreateResponseForPrompt(Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& message, Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& repeatMessage);
        static auto CreateResponseForPrompt(Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& message, Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& repeatMessage, param::iterable<Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile> const& contentTiles);
    };
    struct __declspec(empty_bases) VoiceCommandServiceConnection : Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnection
    {
        VoiceCommandServiceConnection(std::nullptr_t) noexcept {}
        VoiceCommandServiceConnection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnection(ptr, take_ownership_from_abi) {}
        VoiceCommandServiceConnection(VoiceCommandServiceConnection const&) noexcept = default;
        VoiceCommandServiceConnection(VoiceCommandServiceConnection&&) noexcept = default;
        VoiceCommandServiceConnection& operator=(VoiceCommandServiceConnection const&) & noexcept = default;
        VoiceCommandServiceConnection& operator=(VoiceCommandServiceConnection&&) & noexcept = default;
        static auto FromAppServiceTriggerDetails(Windows::ApplicationModel::AppService::AppServiceTriggerDetails const& triggerDetails);
    };
    struct __declspec(empty_bases) VoiceCommandUserMessage : Windows::ApplicationModel::VoiceCommands::IVoiceCommandUserMessage
    {
        VoiceCommandUserMessage(std::nullptr_t) noexcept {}
        VoiceCommandUserMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::VoiceCommands::IVoiceCommandUserMessage(ptr, take_ownership_from_abi) {}
        VoiceCommandUserMessage();
        VoiceCommandUserMessage(VoiceCommandUserMessage const&) noexcept = default;
        VoiceCommandUserMessage(VoiceCommandUserMessage&&) noexcept = default;
        VoiceCommandUserMessage& operator=(VoiceCommandUserMessage const&) & noexcept = default;
        VoiceCommandUserMessage& operator=(VoiceCommandUserMessage&&) & noexcept = default;
    };
}
#endif

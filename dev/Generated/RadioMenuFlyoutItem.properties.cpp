// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "RadioMenuFlyoutItem.h"

namespace winrt::Microsoft::UI::Xaml::Controls
{
    CppWinRTActivatableClassWithDPFactory(RadioMenuFlyoutItem)
}

#include "RadioMenuFlyoutItem.g.cpp"

GlobalDependencyProperty RadioMenuFlyoutItemProperties::s_GroupNameProperty{ nullptr };
GlobalDependencyProperty RadioMenuFlyoutItemProperties::s_IsCheckedProperty{ nullptr };

RadioMenuFlyoutItemProperties::RadioMenuFlyoutItemProperties()
{
    EnsureProperties();
}

void RadioMenuFlyoutItemProperties::EnsureProperties()
{
    if (!s_GroupNameProperty)
    {
        s_GroupNameProperty =
            InitializeDependencyProperty(
                L"GroupName",
                winrt::name_of<winrt::hstring>(),
                winrt::name_of<winrt::RadioMenuFlyoutItem>(),
                false /* isAttached */,
                ValueHelper<winrt::hstring>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnGroupNamePropertyChanged));
    }
    if (!s_IsCheckedProperty)
    {
        s_IsCheckedProperty =
            InitializeDependencyProperty(
                L"IsChecked",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::RadioMenuFlyoutItem>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnIsCheckedPropertyChanged));
    }
}

void RadioMenuFlyoutItemProperties::ClearProperties()
{
    s_GroupNameProperty = nullptr;
    s_IsCheckedProperty = nullptr;
}

void RadioMenuFlyoutItemProperties::OnGroupNamePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::RadioMenuFlyoutItem>();
    winrt::get_self<RadioMenuFlyoutItem>(owner)->OnPropertyChanged(args);
}

void RadioMenuFlyoutItemProperties::OnIsCheckedPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::RadioMenuFlyoutItem>();
    winrt::get_self<RadioMenuFlyoutItem>(owner)->OnPropertyChanged(args);
}

void RadioMenuFlyoutItemProperties::GroupName(winrt::hstring const& value)
{
    static_cast<RadioMenuFlyoutItem*>(this)->SetValue(s_GroupNameProperty, ValueHelper<winrt::hstring>::BoxValueIfNecessary(value));
}

winrt::hstring RadioMenuFlyoutItemProperties::GroupName()
{
    return ValueHelper<winrt::hstring>::CastOrUnbox(static_cast<RadioMenuFlyoutItem*>(this)->GetValue(s_GroupNameProperty));
}

void RadioMenuFlyoutItemProperties::IsChecked(bool value)
{
    static_cast<RadioMenuFlyoutItem*>(this)->SetValue(s_IsCheckedProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
}

bool RadioMenuFlyoutItemProperties::IsChecked()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<RadioMenuFlyoutItem*>(this)->GetValue(s_IsCheckedProperty));
}
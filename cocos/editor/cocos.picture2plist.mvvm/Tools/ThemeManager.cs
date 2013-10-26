﻿using System;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Threading;
using Fluent;

namespace cocos.picture2plist.mvvm.Tools
{
    public enum ThemeStyle
    {
        Silver,
        Blue,
        Black,
        Grey,
        Metro,
        Generic,
    }
    public class ThemeManager
    {
        public static void init(Window mainWnd)
        {
            mMainWindow = mainWnd;
        }
        public static bool ChangeTheme(ThemeStyle style)
        {
            if (null == mMainWindow)
                return false;
            switch (style)
            {
                case ThemeStyle.Silver:
                    {
                        mMainWindow.Dispatcher.BeginInvoke(DispatcherPriority.ApplicationIdle, (ThreadStart)(() =>
                        {
                            Application.Current.Resources.BeginInit();
                            Application.Current.Resources.MergedDictionaries.RemoveAt(1);
                            Application.Current.Resources.MergedDictionaries.Add(new ResourceDictionary { Source = new Uri("pack://application:,,,/Fluent;component/Themes/Office2010/Silver.xaml") });
                            Application.Current.Resources.EndInit();
                        }));
                    }
                    break;
                case ThemeStyle.Blue:
                    mMainWindow.Dispatcher.BeginInvoke(DispatcherPriority.ApplicationIdle, (ThreadStart)(() =>
                    {
                        Application.Current.Resources.BeginInit();
                        Application.Current.Resources.MergedDictionaries.RemoveAt(1);
                        Application.Current.Resources.MergedDictionaries.Add(new ResourceDictionary { Source = new Uri("pack://application:,,,/Fluent;component/Themes/Office2010/Blue.xaml") });
                        Application.Current.Resources.EndInit();
                    }));
                    break;
                case ThemeStyle.Black:
                    mMainWindow.Dispatcher.BeginInvoke(DispatcherPriority.ApplicationIdle, (ThreadStart)(() =>
                    {
                        Application.Current.Resources.BeginInit();
                        Application.Current.Resources.MergedDictionaries.RemoveAt(1);
                        Application.Current.Resources.MergedDictionaries.Add(new ResourceDictionary { Source = new Uri("pack://application:,,,/Fluent;component/Themes/Office2010/Black.xaml") });
                        Application.Current.Resources.EndInit();
                    }));
                    break;
                case ThemeStyle.Grey:
                    mMainWindow.Dispatcher.BeginInvoke(DispatcherPriority.ApplicationIdle, (ThreadStart)(() =>
                    {
                        Application.Current.Resources.BeginInit();
                        Application.Current.Resources.MergedDictionaries.RemoveAt(1);
                        Application.Current.Resources.MergedDictionaries.Add(new ResourceDictionary { Source = new Uri("pack://application:,,,/Fluent;component/Themes/Office2010/Black.xaml") });
                        Application.Current.Resources.EndInit();
                    }));
                    break;
                case ThemeStyle.Metro:
                    mMainWindow.Dispatcher.BeginInvoke(DispatcherPriority.ApplicationIdle, (ThreadStart)(() =>
                    {
                        Application.Current.Resources.BeginInit();
                        Application.Current.Resources.MergedDictionaries.RemoveAt(1);
                        Application.Current.Resources.MergedDictionaries.Add(new ResourceDictionary { Source = new Uri("pack://application:,,,/Fluent;component/Themes/Office2010/Silver.xaml") });
                        Application.Current.Resources.EndInit();
                    }));
                    break;
                case ThemeStyle.Generic:
                    mMainWindow.Dispatcher.BeginInvoke(DispatcherPriority.ApplicationIdle, (ThreadStart)(() =>
                    {
                        Application.Current.Resources.BeginInit();
                        Application.Current.Resources.MergedDictionaries.RemoveAt(1);
                        Application.Current.Resources.MergedDictionaries.Add(new ResourceDictionary { Source = new Uri("pack://application:,,,/Fluent;component/Themes/Office2010/Silver.xaml") });
                        Application.Current.Resources.EndInit();
                    }));
                    break;
                default: return false;
            }
            return true;
        }

        public static bool ChangeTheme(Xceed.Wpf.AvalonDock.DockingManager dockingManager, ThemeStyle style)
        {
            if (null == mMainWindow)
                return false;
            switch (style)
            {
            case ThemeStyle.Silver:
                    mMainWindow.Dispatcher.BeginInvoke(DispatcherPriority.ApplicationIdle, (ThreadStart)(() =>
                {
                    Application.Current.Resources.BeginInit();
                    Application.Current.Resources.MergedDictionaries.RemoveAt(1);
                    Application.Current.Resources.MergedDictionaries.Add(new ResourceDictionary { Source = new Uri("pack://application:,,,/Fluent;component/Themes/Office2010/Silver.xaml") });
                    Application.Current.Resources.EndInit();
                }));
                dockingManager.Theme = new Xceed.Wpf.AvalonDock.Themes.AeroTheme();
                break;
            case ThemeStyle.Blue:
                mMainWindow.Dispatcher.BeginInvoke(DispatcherPriority.ApplicationIdle, (ThreadStart)(() =>
                {
                    Application.Current.Resources.BeginInit();
                    Application.Current.Resources.MergedDictionaries.RemoveAt(1);
                    Application.Current.Resources.MergedDictionaries.Add(new ResourceDictionary { Source = new Uri("pack://application:,,,/Fluent;component/Themes/Office2010/Blue.xaml") });
                    Application.Current.Resources.EndInit();
                }));
                dockingManager.Theme = new Xceed.Wpf.AvalonDock.Themes.VS2010Theme();
                break;
            case ThemeStyle.Black:
                mMainWindow.Dispatcher.BeginInvoke(DispatcherPriority.ApplicationIdle, (ThreadStart)(() =>
                {
                    Application.Current.Resources.BeginInit();
                    Application.Current.Resources.MergedDictionaries.RemoveAt(1);
                    Application.Current.Resources.MergedDictionaries.Add(new ResourceDictionary { Source = new Uri("pack://application:,,,/Fluent;component/Themes/Office2010/Black.xaml") });
                    Application.Current.Resources.EndInit();
                }));
                dockingManager.Theme = new Xceed.Wpf.AvalonDock.Themes.ExpressionDarkTheme();
                break;
            case ThemeStyle.Grey:
                mMainWindow.Dispatcher.BeginInvoke(DispatcherPriority.ApplicationIdle, (ThreadStart)(() =>
                {
                    Application.Current.Resources.BeginInit();
                    Application.Current.Resources.MergedDictionaries.RemoveAt(1);
                    Application.Current.Resources.MergedDictionaries.Add(new ResourceDictionary { Source = new Uri("pack://application:,,,/Fluent;component/Themes/Office2010/Black.xaml") });
                    Application.Current.Resources.EndInit();
                }));
                dockingManager.Theme = new Xceed.Wpf.AvalonDock.Themes.ExpressionLightTheme();
                break;
            case ThemeStyle.Metro:
                mMainWindow.Dispatcher.BeginInvoke(DispatcherPriority.ApplicationIdle, (ThreadStart)(() =>
                {
                    Application.Current.Resources.BeginInit();
                    Application.Current.Resources.MergedDictionaries.RemoveAt(1);
                    Application.Current.Resources.MergedDictionaries.Add(new ResourceDictionary { Source = new Uri("pack://application:,,,/Fluent;component/Themes/Office2010/Silver.xaml") });
                    Application.Current.Resources.EndInit();
                }));
                dockingManager.Theme = new Xceed.Wpf.AvalonDock.Themes.MetroTheme();
                break;
            case ThemeStyle.Generic:
                mMainWindow.Dispatcher.BeginInvoke(DispatcherPriority.ApplicationIdle, (ThreadStart)(() =>
                {
                    Application.Current.Resources.BeginInit();
                    Application.Current.Resources.MergedDictionaries.RemoveAt(1);
                    Application.Current.Resources.MergedDictionaries.Add(new ResourceDictionary { Source = new Uri("pack://application:,,,/Fluent;component/Themes/Office2010/Silver.xaml") });
                    Application.Current.Resources.EndInit();
                }));
                dockingManager.Theme = new Xceed.Wpf.AvalonDock.Themes.GenericTheme();
                break;
            default: return false;
            }
            return true;
        }

        private static Window mMainWindow = null;
    }
}

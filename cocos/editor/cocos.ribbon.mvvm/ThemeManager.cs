using System;
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

namespace cocos.ribbon.mvvm
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
        public static bool ChangeTheme(ThemeStyle style)
        {
            switch (style)
            {
                case ThemeStyle.Silver:
                    {
                        Dispatcher.BeginInvoke(DispatcherPriority.ApplicationIdle, (ThreadStart)(() =>
                        {
                            Application.Current.Resources.BeginInit();
                            Application.Current.Resources.MergedDictionaries.RemoveAt(1);
                            Application.Current.Resources.MergedDictionaries.Add(new ResourceDictionary { Source = new Uri("pack://application:,,,/Fluent;component/Themes/Office2010/Silver.xaml") });
                            Application.Current.Resources.EndInit();
                        }));
                    }
                    break;
                case ThemeStyle.Blue:
                    Dispatcher.BeginInvoke(DispatcherPriority.ApplicationIdle, (ThreadStart)(() =>
                    {
                        Application.Current.Resources.BeginInit();
                        Application.Current.Resources.MergedDictionaries.RemoveAt(1);
                        Application.Current.Resources.MergedDictionaries.Add(new ResourceDictionary { Source = new Uri("pack://application:,,,/Fluent;component/Themes/Office2010/Blue.xaml") });
                        Application.Current.Resources.EndInit();
                    }));
                    break;
                case ThemeStyle.Black:
                    Dispatcher.BeginInvoke(DispatcherPriority.ApplicationIdle, (ThreadStart)(() =>
                    {
                        Application.Current.Resources.BeginInit();
                        Application.Current.Resources.MergedDictionaries.RemoveAt(1);
                        Application.Current.Resources.MergedDictionaries.Add(new ResourceDictionary { Source = new Uri("pack://application:,,,/Fluent;component/Themes/Office2010/Black.xaml") });
                        Application.Current.Resources.EndInit();
                    }));
                    break;
                case ThemeStyle.Grey:
                    Dispatcher.BeginInvoke(DispatcherPriority.ApplicationIdle, (ThreadStart)(() =>
                    {
                        Application.Current.Resources.BeginInit();
                        Application.Current.Resources.MergedDictionaries.RemoveAt(1);
                        Application.Current.Resources.MergedDictionaries.Add(new ResourceDictionary { Source = new Uri("pack://application:,,,/Fluent;component/Themes/Office2010/Black.xaml") });
                        Application.Current.Resources.EndInit();
                    }));
                    break;
                case ThemeStyle.Metro:
                    Dispatcher.BeginInvoke(DispatcherPriority.ApplicationIdle, (ThreadStart)(() =>
                    {
                        Application.Current.Resources.BeginInit();
                        Application.Current.Resources.MergedDictionaries.RemoveAt(1);
                        Application.Current.Resources.MergedDictionaries.Add(new ResourceDictionary { Source = new Uri("pack://application:,,,/Fluent;component/Themes/Office2010/Silver.xaml") });
                        Application.Current.Resources.EndInit();
                    }));
                    break;
                case ThemeStyle.Generic:
                    Dispatcher.BeginInvoke(DispatcherPriority.ApplicationIdle, (ThreadStart)(() =>
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
            switch (style)
            {
            case ThemeStyle.Silver:
                Dispatcher.BeginInvoke(DispatcherPriority.ApplicationIdle, (ThreadStart)(() =>
                {
                    Application.Current.Resources.BeginInit();
                    Application.Current.Resources.MergedDictionaries.RemoveAt(1);
                    Application.Current.Resources.MergedDictionaries.Add(new ResourceDictionary { Source = new Uri("pack://application:,,,/Fluent;component/Themes/Office2010/Silver.xaml") });
                    Application.Current.Resources.EndInit();
                }));
                dockingManager.Theme = new Xceed.Wpf.AvalonDock.Themes.AeroTheme();
                break;
            case ThemeStyle.Blue:
                Dispatcher.BeginInvoke(DispatcherPriority.ApplicationIdle, (ThreadStart)(() =>
                {
                    Application.Current.Resources.BeginInit();
                    Application.Current.Resources.MergedDictionaries.RemoveAt(1);
                    Application.Current.Resources.MergedDictionaries.Add(new ResourceDictionary { Source = new Uri("pack://application:,,,/Fluent;component/Themes/Office2010/Blue.xaml") });
                    Application.Current.Resources.EndInit();
                }));
                dockingManager.Theme = new Xceed.Wpf.AvalonDock.Themes.VS2010Theme();
                break;
            case ThemeStyle.Black:
                Dispatcher.BeginInvoke(DispatcherPriority.ApplicationIdle, (ThreadStart)(() =>
                {
                    Application.Current.Resources.BeginInit();
                    Application.Current.Resources.MergedDictionaries.RemoveAt(1);
                    Application.Current.Resources.MergedDictionaries.Add(new ResourceDictionary { Source = new Uri("pack://application:,,,/Fluent;component/Themes/Office2010/Black.xaml") });
                    Application.Current.Resources.EndInit();
                }));
                dockingManager.Theme = new Xceed.Wpf.AvalonDock.Themes.ExpressionDarkTheme();
                break;
            case ThemeStyle.Grey:
                Dispatcher.BeginInvoke(DispatcherPriority.ApplicationIdle, (ThreadStart)(() =>
                {
                    Application.Current.Resources.BeginInit();
                    Application.Current.Resources.MergedDictionaries.RemoveAt(1);
                    Application.Current.Resources.MergedDictionaries.Add(new ResourceDictionary { Source = new Uri("pack://application:,,,/Fluent;component/Themes/Office2010/Black.xaml") });
                    Application.Current.Resources.EndInit();
                }));
                dockingManager.Theme = new Xceed.Wpf.AvalonDock.Themes.ExpressionLightTheme();
                break;
            case ThemeStyle.Metro:
                Dispatcher.BeginInvoke(DispatcherPriority.ApplicationIdle, (ThreadStart)(() =>
                {
                    Application.Current.Resources.BeginInit();
                    Application.Current.Resources.MergedDictionaries.RemoveAt(1);
                    Application.Current.Resources.MergedDictionaries.Add(new ResourceDictionary { Source = new Uri("pack://application:,,,/Fluent;component/Themes/Office2010/Silver.xaml") });
                    Application.Current.Resources.EndInit();
                }));
                dockingManager.Theme = new Xceed.Wpf.AvalonDock.Themes.MetroTheme();
                break;
            case ThemeStyle.Generic:
                Dispatcher.BeginInvoke(DispatcherPriority.ApplicationIdle, (ThreadStart)(() =>
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
    }
}

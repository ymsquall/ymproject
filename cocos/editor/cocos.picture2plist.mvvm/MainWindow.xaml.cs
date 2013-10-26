using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using Fluent;

namespace cocos.picture2plist.mvvm
{
    /// <summary>
    /// EntryWindow.xaml 的交互逻辑
    /// </summary>
    public partial class MainWindow : RibbonWindow
    {
        public MainWindow()
        {
            mInstacne = this;
            Tools.ThemeManager.init(mInstacne);
            //ThemeManager.ChangeTheme(ThemeStyle.Black);
            InitializeComponent();
        }
        ~MainWindow()
        {
            mInstacne = null;
        }

        public static MainWindow Instance
        {
            get { return mInstacne; }
        }

        private void OnOpenBtnClick(object sender, RoutedEventArgs e)
        {

        }

        private void OnSaveAsBtnClick(object sender, RoutedEventArgs e)
        {

        }
        private void OnSaveAllBtnClick(object sender, RoutedEventArgs e)
        {

        }
        private void OnExportBtnClick(object sender, RoutedEventArgs e)
        {

        }

        static RoutedCommand new1 = new RoutedCommand("New1", typeof(MainWindow));
        static public RoutedCommand New1
        {
            get { return new1; }
        }

        public static RoutedCommand CustomRoutedCommand = new RoutedCommand("lala", typeof(MainWindow));
        static public RoutedCommand lala
        {
            get { return CustomRoutedCommand; }
        }

        private static MainWindow mInstacne = null;
    }
}
